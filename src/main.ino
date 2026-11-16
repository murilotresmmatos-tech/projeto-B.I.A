
#include <ESP32Servo.h>

#define TRIG_LIXO 25
#define ECHO_LIXO 26

#define TRIG_NIVEL 27
#define ECHO_NIVEL 14

#define PINO_SERVO 13

Servo raspador;

const float DISTANCIA_LIXO = 10.0;

const float NIVEL_CHEIO = 5.0;
const float NIVEL_ALERTA = 10.0;

const int POSICAO_INICIAL = 20;
const int POSICAO_RASPAGEM = 110;

bool residuoProcessado = false;

float medirDistancia(int trig, int echo) {

  digitalWrite(trig, LOW);
  delayMicroseconds(3);

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  long duracao = pulseIn(echo, HIGH, 30000);

  if (duracao == 0) {
    return -1;
  }

  float distancia = duracao * 0.0343 / 2;

  return distancia;
}


void acionarRaspador() {

  Serial.println("Residuo detectado!");
  Serial.println("Acionando mecanismo raspador...");

  raspador.write(POSICAO_RASPAGEM);
  delay(700);

  raspador.write(POSICAO_INICIAL);
  delay(700);

  Serial.println("Remocao concluida!");

}


void verificarCompartimento(float distancia) {

  if (distancia < 0) {
    Serial.println("Falha na leitura do nivel!");
    return;
  }

  Serial.print("Nivel do compartimento: ");
  Serial.print(distancia);
  Serial.println(" cm");

  if (distancia <= NIVEL_CHEIO) {

    Serial.println("ATENCAO: COMPARTIMENTO CHEIO!");

  }

  else if (distancia <= NIVEL_ALERTA) {

    Serial.println("AVISO: COMPARTIMENTO QUASE CHEIO!");

  }

  else {

    Serial.println("Compartimento com capacidade disponivel.");

  }
}

void setup() {

  Serial.begin(115200);

  pinMode(TRIG_LIXO, OUTPUT);
  pinMode(ECHO_LIXO, INPUT);

  pinMode(TRIG_NIVEL, OUTPUT);
  pinMode(ECHO_NIVEL, INPUT);

  raspador.setPeriodHertz(50);
  raspador.attach(PINO_SERVO, 500, 2400);

  raspador.write(POSICAO_INICIAL);

  Serial.println("================================");
  Serial.println("BUEIRO INTELIGENTE AUTOLIMPANTE");
  Serial.println("Sistema iniciado!");
  Serial.println("================================");

  delay(1000);
}


void loop() {

  float distanciaLixo = medirDistancia(
    TRIG_LIXO, ECHO_LIXO
  );

  delay(60);

  float distanciaNivel = medirDistancia(
    TRIG_NIVEL, ECHO_NIVEL
  );

  Serial.println("\n----- MONITORAMENTO -----");

  
  verificarCompartimento(distanciaNivel);


  if (distanciaLixo > 0) {

    Serial.print("Distancia da grade: ");
    Serial.print(distanciaLixo);
    Serial.println(" cm");

    bool residuoDetectado =
      distanciaLixo <= DISTANCIA_LIXO;

    if (!residuoDetectado) {

     
      residuoProcessado = false;

    }

    else if (!residuoProcessado) {

      if (distanciaNivel > NIVEL_CHEIO) {

        acionarRaspador();
        residuoProcessado = true;

      }

      else {

        Serial.println(
          "Raspagem bloqueada: compartimento cheio!"
        );

      }

    }

  }

  else {

    Serial.println("Falha na leitura do sensor da grade.");

  }

  delay(500);
}

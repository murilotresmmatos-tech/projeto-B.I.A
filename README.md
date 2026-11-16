# Bueiro Inteligente Autolimpante (B.I.A.)

> Sistema automatizado para detecção, remoção e monitoramento de resíduos sólidos em bueiros urbanos, utilizando sensores e mecanismos controlados por um microcontrolador ESP32.

---

## 📌 Informações Gerais

- **Nome do Projeto:** Bueiro Inteligente Autolimpante (B.I.A.)
- **Equipe:** Arthur, Daniel, Luan, Manuella, Murilo, Raíssa e Samuel
- **Curso:** Técnico em Informática
- **Instituição:** FUNEC – Unidade Riacho
- **Ano/Semestre:** 2026
- **Professor Orientador:** Alexandre
- **Cliente/Setor Solicitante:** Comunidade urbana e setor de infraestrutura pública.

---

## 🎯 Objetivo do Projeto

Desenvolver um protótipo de bueiro inteligente capaz de detectar a presença de resíduos sólidos sobre sua grade, realizar sua remoção automaticamente por meio de um mecanismo raspador e monitorar o nível de preenchimento de um compartimento coletor.

O projeto busca contribuir para a prevenção de obstruções nos sistemas de drenagem urbana, facilitando a manutenção e incentivando a aplicação da tecnologia na solução de problemas ambientais e urbanos.

---

## 👥 Público-Alvo

- Comunidade urbana.
- Órgãos responsáveis pela limpeza e manutenção urbana.
- Setores de infraestrutura e saneamento.
- Instituições interessadas em soluções tecnológicas sustentáveis.

---

## 🧩 Problema a Ser Resolvido

O acúmulo de resíduos sólidos nas grades dos bueiros é um problema recorrente nas cidades, principalmente devido ao descarte inadequado de lixo nas ruas.

Essa situação dificulta o escoamento da água da chuva, podendo provocar obstruções e contribuir para a ocorrência de alagamentos.

Além disso, a limpeza desses dispositivos depende frequentemente de intervenções manuais, demonstrando a necessidade de alternativas que auxiliem na remoção e no monitoramento dos resíduos.

---

## 💡 Solução Proposta

O Bueiro Inteligente Autolimpante propõe um sistema automatizado que utiliza sensores ultrassônicos para detectar resíduos sobre a grade do bueiro.

Quando um resíduo é identificado, o microcontrolador ESP32 aciona um mecanismo raspador, responsável por deslocar os materiais para um compartimento lateral.

O compartimento possui aberturas para permitir a passagem da água e conta com um sensor responsável por monitorar seu nível de preenchimento, identificando quando está próximo da capacidade máxima.

---

## ⚙️ Funcionalidades do Sistema

### Funcionalidades Principais

- [x] Detecção de objetos próximos à grade por sensor ultrassônico.
- [x] Controle centralizado pelo microcontrolador ESP32.
- [x] Acionamento automatizado do mecanismo raspador.
- [x] Deslocamento dos resíduos para um compartimento lateral.
- [x] Monitoramento do nível de preenchimento do compartimento.
- [x] Identificação de compartimento próximo da capacidade máxima.
- [x] Bloqueio de novas operações quando o compartimento está cheio.

---

## 🛠️ Tecnologias Utilizadas

- **Microcontrolador:** ESP32.
- **Linguagem:** C++.
- **Sensores:** Ultrassônicos HC-SR04.
- **Atuador:** Motor elétrico responsável pela movimentação do mecanismo raspador.
- **Programação:** Arduino IDE.
- **Montagem eletrônica:** Protoboard, jumpers e componentes eletrônicos.
- **Versionamento:** Git e GitHub.

---

## 🗂️ Estrutura do Projeto

```text
projeto-B.I.A/
│
├── src/
│   └── main.ino
│
├── docs/
│   └── imagens/
│
├── README.md
│
└── .gitignore
```

---

## 🧪 Requisitos Funcionais

- RF01 – O sistema deve detectar a presença de resíduos sobre a grade do bueiro.
- RF02 – O sistema deve processar as informações recebidas pelos sensores utilizando o ESP32.
- RF03 – O sistema deve acionar automaticamente o mecanismo raspador quando identificar resíduos.
- RF04 – O mecanismo deve deslocar os resíduos para um compartimento lateral.
- RF05 – O sistema deve monitorar o nível de preenchimento do compartimento coletor.
- RF06 – O sistema deve identificar quando o compartimento estiver próximo de sua capacidade máxima.
- RF07 – O sistema deve impedir novas operações de raspagem quando o compartimento estiver cheio.

---

## 🚫 Requisitos Não Funcionais

- O sistema deve funcionar por meio de componentes eletrônicos integrados ao ESP32.
- O protótipo deve apresentar funcionamento automatizado.
- A estrutura deve permitir a passagem da água pelo compartimento coletor.
- Os componentes devem estar organizados e protegidos na estrutura do protótipo.
- O sistema deve apresentar respostas adequadas às informações recebidas pelos sensores.
- O projeto deve permitir futuras melhorias e adaptações para aplicações reais.

---

## 📅 Cronograma do Projeto

| Etapa | Descrição | Responsável | Data |
|---|---|---|---|
| 1 | Pesquisa e identificação do problema | Manuela e Raissa | [27/04] |
| 2 | Planejamento e elaboração do projeto | todos | [27/04] |
| 3 | Construção da maquete | Manuela e Raissa | [17/05] |
| 4 | Montagem dos circuitos eletrônicos | Samuel, Luan e Murilo | [15/06] |
| 5 | Desenvolvimento do código | Arthur e Daniel | [01/08 -
31/09] |
| 6 | Integração dos componentes e testes | Murilo e Luan | [10/10] |
| 7 | Documentação e apresentação | Manuela e Raissa | [13/11] |

---

## 🧑‍💻 Integrantes da Equipe

| Nome | Função | Responsabilidade |
|---|---|---|
| [Daniel e Arthur] | Desenvolvedor | Programação do ESP32 |
| [Murilo, Luan e Samuel] | Montagem | Construção da maquete e circuitos |
| [Manuela e Raissa] | Documentação | Pesquisa e elaboração dos documentos |
| [todos] | Testes | Verificação do funcionamento do protótipo |

---

## 🔐 Controle de Acesso (se aplicável)

Não se aplica. O projeto consiste em um sistema físico automatizado, sem necessidade de autenticação de usuários.

---

## 📷 Protótipos / Telas

Serão disponibilizadas imagens e registros do desenvolvimento do projeto, incluindo:

- Maquete do bueiro inteligente.
- Circuito eletrônico com ESP32.
- Sensores ultrassônicos utilizados.
- Mecanismo raspador.
- Compartimento lateral de armazenamento dos resíduos.

---

## 📦 Como Executar o Projeto

1. Instalar a Arduino IDE no computador.
2. Configurar o suporte para placas ESP32 na Arduino IDE.
3. Instalar as bibliotecas necessárias para os componentes utilizados.
4. Conectar o ESP32 ao computador por meio de um cabo USB.
5. Abrir o arquivo `main.ino` localizado na pasta `src`.
6. Selecionar a placa ESP32 e a porta serial correspondente.
7. Verificar as conexões dos sensores e do mecanismo raspador.
8. Compilar e enviar o código para o microcontrolador.
9. Alimentar o circuito com a fonte adequada.
10.Posicionar os resíduos de teste sobre a grade e observar o funcionamento do sistema.

FUNEC – Unidade Riacho | XIII Mostra de Tecnologia | 2026

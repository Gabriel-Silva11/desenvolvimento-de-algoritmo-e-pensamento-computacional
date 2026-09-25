# Conversor de Temperaturas em C

Este projeto é uma aplicação de linha de comando (CLI) desenvolvida em **C** que realiza a conversão entre as três principais escalas termométricas: **Celsius (°C)**, **Fahrenheit (°F)** e **Kelvin (K)**.

O objetivo principal é demonstrar o uso de **estruturas de controle condicionais (`switch case`)**, **laços de repetição (`do-while`)** e validações básicas em C.

---

## Funcionalidades

- Menu interativo no terminal com 6 opções de conversão:
  1. Celsius (°C) ➔ Fahrenheit (°F)
  2. Fahrenheit (°F) ➔ Celsius (°C)
  3. Celsius (°C) ➔ Kelvin (K)
  4. Kelvin (K) ➔ Celsius (°C)
  5. Fahrenheit (°F) ➔ Kelvin (K)
  6. Kelvin (K) ➔ Fahrenheit (°F)
- Execução contínua até o usuário escolher a opção de saída (`0`).
- Formatação de saída com duas casas decimais.

---

## Conceitos Utilizados

- **Estruturas de Decisão:** Uso do `switch case` para tratar o menu de escolhas.
- **Estrutura de Repetição:** Laço `do-while` para manter o programa em execução contínua.
- **Entrada e Saída:** Funções `scanf` e `printf` para leitura e exibição de dados.
- **Fórmulas Matemáticas:**
  - $°F = (°C \times 9 / 5) + 32$
  - $°C = (°F - 32) \times 5 / 9$
  - $K = °C + 273.15$
  - $°C = K - 273.15$# 🌡️ Conversor de Temperaturas em C

> **Projeto Acadêmico** desenvolvido para a disciplina de **Algoritmos e Pensamento Computacional**.

---

## Sobre o Projeto

Este projeto é uma aplicação de linha de comando (CLI) desenvolvida em **C** que realiza a conversão precisa entre as três principais escalas termométricas: **Celsius (°C)**, **Fahrenheit (°F)** e **Kelvin (K)**. 

O objetivo da atividade é consolidar conceitos fundamentais da programação estruturada, aplicando boas práticas de código, modularização simples e tratamento de fluxos condicionais.

---

## Autor

- **Gabriel da Silva**

---

## Objetivos de Aprendizagem

- **Estruturas de Controle Condicional:** Implementação do bloco `switch case` para gerenciamento eficiente do menu de opções.
- **Laços de Repetição:** Utilização do laço `do-while` para manter a execução contínua da aplicação até a solicitação de saída pelo usuário.
- **Entrada e Saída de Dados:** Manipulação de fluxos com `scanf` e `printf`, incluindo formatação de casas decimais (`%.2f`).
- **Validação de Entrada:** Tratamento básico de erros na leitura de opções do menu.

---

## Funcionalidades

O programa conta com um menu interativo com as seguintes opções:

1. **Celsius (°C) ➔ Fahrenheit (°F)**
2. **Fahrenheit (°F) ➔ Celsius (°C)**
3. **Celsius (°C) ➔ Kelvin (K)**
4. **Kelvin (K) ➔ Celsius (°C)**
5. **Fahrenheit (°F) ➔ Kelvin (K)**
6. **Kelvin (K) ➔ Fahrenheit (°F)**
7. **`0` - Sair do Programa**

---

## Fórmulas Utilizadas

$$\text{Celsius para Fahrenheit: } °F = (°C \times \frac{9}{5}) + 32$$

$$\text{Fahrenheit para Celsius: } °C = (°F - 32) \times \frac{5}{9}$$

$$\text{Celsius para Kelvin: } K = °C + 273.15$$

$$\text{Kelvin para Celsius: } °C = K - 273.15$$
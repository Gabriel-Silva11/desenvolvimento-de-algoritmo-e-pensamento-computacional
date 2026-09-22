# 🧮 Calculadora Matemática em C

Uma calculadora interativa de console desenvolvida em **C**, com 20 operações matemáticas úteis no dia a dia.

**Autor:** Gabriel da Silva

## 🎯 Objetivo

Este projeto foi desenvolvido com o intuito de praticar e consolidar conceitos fundamentais da linguagem C, como:

- Uso de estruturas de repetição (`do-while`)
- Estruturas de seleção (`switch-case`)
- Entrada e saída de dados (`scanf` e `printf`)
- Operações matemáticas básicas e funções da biblioteca `math.h`
- Validações simples de entrada

É um exercício ideal para estudantes que estão iniciando na programação e desejam aplicar a lógica de programação em um programa completo e interativo.

## ✨ Funcionalidades

| Opção | Operação |
|-------|----------|
| 1 | Soma |
| 2 | Subtração |
| 3 | Multiplicação |
| 4 | Divisão (com verificação de divisão por zero) |
| 5 | Resto da divisão |
| 6 | Potência |
| 7 | Raiz quadrada |
| 8 | Média de 3 números |
| 9 | Porcentagem |
| 10 | Área do quadrado |
| 11 | Área do retângulo |
| 12 | Área do triângulo |
| 13 | Área do círculo |
| 14 | Perímetro do quadrado |
| 15 | Perímetro do retângulo |
| 16 | Circunferência do círculo |
| 17 | Teorema de Pitágoras (cálculo da hipotenusa) |
| 18 | Conversão de Celsius para Fahrenheit |
| 19 | Juros simples (juros + montante) |
| 20 | Cálculo de IMC |
| 0 | Sair |

## 🛠️ Requisitos

- Compilador C (GCC recomendado)
- Biblioteca matemática (`math.h`)

## ⚙️ Como funciona

O programa exibe um menu interativo em loop. O usuário escolhe uma opção digitando o número correspondente e, em seguida, informa os valores solicitados.  

Cada operação é tratada por um `switch-case`. O programa realiza o cálculo e mostra o resultado com duas casas decimais. Há validações básicas, como verificação de divisão por zero, raiz de número negativo e altura inválida no cálculo de IMC.  

O menu continua sendo exibido até que o usuário selecione a opção **0** para sair.

=====================================
       EXEMPLO
=====================================
 1 - Soma
 2 - Subtração
 ...
20 - IMC
 0 - Sair
=====================================
Escolha uma opcao: 1

Digite dois numeros: 15 27
Resultado: 42.00

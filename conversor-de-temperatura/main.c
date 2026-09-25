#include <stdio.h>
#include <stdlib.h>

void exibir_menu() {
    printf("\n=========================================\n");
    printf("        CONVERSOR DE TEMPERATURAS        \n");
    printf("=========================================\n");
    printf("1 - Celsius (°C) para Fahrenheit (°F)\n");
    printf("2 - Fahrenheit (°F) para Celsius (°C)\n");
    printf("3 - Celsius (°C) para Kelvin (K)\n");
    printf("4 - Kelvin (K) para Celsius (°C)\n");
    printf("5 - Fahrenheit (°F) para Kelvin (K)\n");
    printf("6 - Kelvin (K) para Fahrenheit (°F)\n");
    printf("0 - Sair do Programa\n");
    printf("=========================================\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    float temp, resultado;

    do {
        exibir_menu();
        if (scanf("%d", &opcao) != 1) {
            printf("\nErro: Entrada invalida! Digite apenas numeros.\n");
            break;
        }

        switch (opcao) {
            case 1:
                printf("\n--- Celsius -> Fahrenheit ---\n");
                printf("Digite a temperatura em Celsius (°C): ");
                scanf("%f", &temp);
                resultado = (temp * 9 / 5) + 32;
                printf("Resultado: %.2f °C = %.2f °F\n", temp, resultado);
                break;

            case 2:
                printf("\n--- Fahrenheit -> Celsius ---\n");
                printf("Digite a temperatura em Fahrenheit (°F): ");
                scanf("%f", &temp);
                resultado = (temp - 32) * 5 / 9;
                printf("Resultado: %.2f °F = %.2f °C\n", temp, resultado);
                break;

            case 3:
                printf("\n--- Celsius -> Kelvin ---\n");
                printf("Digite a temperatura em Celsius (°C): ");
                scanf("%f", &temp);
                resultado = temp + 273.15;
                printf("Resultado: %.2f °C = %.2f K\n", temp, resultado);
                break;

            case 4:
                printf("\n--- Kelvin -> Celsius ---\n");
                printf("Digite a temperatura em Kelvin (K): ");
                scanf("%f", &temp);
                resultado = temp - 273.15;
                printf("Resultado: %.2f K = %.2f °C\n", temp, resultado);
                break;

            case 5:
                printf("\n--- Fahrenheit -> Kelvin ---\n");
                printf("Digite a temperatura em Fahrenheit (°F): ");
                scanf("%f", &temp);
                resultado = (temp - 32) * 5 / 9 + 273.15;
                printf("Resultado: %.2f °F = %.2f K\n", temp, resultado);
                break;

            case 6:
                printf("\n--- Kelvin -> Fahrenheit ---\n");
                printf("Digite a temperatura em Kelvin (K): ");
                scanf("%f", &temp);
                resultado = (temp - 273.15) * 9 / 5 + 32;
                printf("Resultado: %.2f K = %.2f °F\n", temp, resultado);
                break;

            case 0:
                printf("\nEncerrando o programa... Ate logo!\n");
                break;

            default:
                printf("\nOpcao invalida! Por favor, escolha um numero de 0 a 6.\n");
                break;
        }

    } while (opcao != 0);

    return 0;
}
#include <stdio.h>

int main() {
    // =============================
    // DADOS DA CARTA 1
    // (Você pode trocar pelos seus valores reais)
    // =============================
    char nome1[50] = "Brasil";
    int populacao1 = 214000000;
    float area1 = 8516000.0;
    float pib1 = 1.6;
    int turismo1 = 50;

    float densidade1 = populacao1 / area1;


    // =============================
    // DADOS DA CARTA 2
    // =============================
    char nome2[50] = "Argentina";
    int populacao2 = 45000000;
    float area2 = 2780000.0;
    float pib2 = 0.49;
    int turismo2 = 30;

    float densidade2 = populacao2 / area2;


    // =============================
    // MENU INTERATIVO
    // =============================
    int opcao;

    printf("=== SUPER TRUNFO — MENU DE COMPARAÇÃO ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (MENOR vence)\n");
    printf("Opção: ");

    scanf("%d", &opcao);

    // =============================
    // COMPARAÇÕES
    // =============================

    printf("\nComparando %s VS %s\n\n", nome1, nome2);

    switch (opcao) {

        case 1: // POPULAÇÃO
            printf("População:\n%s: %d\n%s: %d\n\n",
                nome1, populacao1, nome2, populacao2);

            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2: // ÁREA
            printf("Área:\n%s: %.2f km²\n%s: %.2f km²\n\n",
                nome1, area1, nome2, area2);

            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB:\n%s: %.2f trilhões\n%s: %.2f trilhões\n\n",
                nome1, pib1, nome2, pib2);

            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4: // PONTOS TURÍSTICOS
            printf("Pontos turísticos:\n%s: %d\n%s: %d\n\n",
                nome1, turismo1, nome2, turismo2);

            if (turismo1 > turismo2)
                printf("Vencedor: %s\n", nome1);
            else if (turismo2 > turismo1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5: // DENSIDADE (MENOR VENCE)
            printf("Densidade demográfica:\n%s: %.4f\n%s: %.4f\n\n",
                nome1, densidade1, nome2, densidade2);

            if (densidade1 < densidade2)
                printf("Vencedor: %s (menor densidade)\n", nome1);
            else if (densidade2 < densidade1)
                printf("Vencedor: %s (menor densidade)\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida.\n");
            break;
    }

    return 0;
}

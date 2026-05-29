#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //Criar variáveis das duas cartas:
    // Carta 1
    char estado[20], codigo_carta[5], cidade[30];
    int populacao, num_pontos_turisticos;
    float area, pib, densidade_populacional, pib_per_capita;

    // Carta 2
    char estado2[20], codigo_carta2[5], cidade2[30];
    int populacao2, num_pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    // Variáveis menu
    int opcao1, opcao2;

    float atributo1_c1, atributo1_c2;
    float atributo2_c1, atributo2_c2;

    float soma_carta1, soma_carta2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    // ===== Entrada Carta 1 =====

    printf("Estado: ");
    scanf("%s", estado);

    printf("Codigo carta: ");
    scanf("%s", codigo_carta);

    printf("Cidade: ");
    scanf("%s", cidade);

    printf("Populacao: ");
    scanf("%d", &populacao);

    printf("Pontos turisticos: ");
    scanf("%d", &num_pontos_turisticos);

    printf("Area: ");
    scanf("%f", &area);

    printf("PIB: ");
    scanf("%f", &pib);

    // ===== Entrada Carta 2 =====

    printf("\nEstado 2: ");
    scanf("%s", estado2);

    printf("Codigo carta 2: ");
    scanf("%s", codigo_carta2);

    printf("Cidade 2: ");
    scanf("%s", cidade2);

    printf("Populacao 2: ");
    scanf("%d", &populacao2);

    printf("Pontos turisticos 2: ");
    scanf("%d", &num_pontos_turisticos2);

    printf("Area 2: ");
    scanf("%f", &area2);

    printf("PIB 2: ");
    scanf("%f", &pib2);
    
    // ===== Cálculos =====
    densidade_populacional = populacao / area;
    densidade_populacional2 = populacao2 / area2;

    pib_per_capita = pib / populacao;
    pib_per_capita2 = pib2 / populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // ===== MENU =====
    printf("\n***** MENU *****\n");
    printf("1 - Populacao\n");
    printf("2 - Pontos Turisticos\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - PIB per capita\n");
    printf("6 - Densidade Populacional\n");

    printf("\nEscolha o PRIMEIRO atributo: ");
    scanf("%d", &opcao1);

    printf("Escolha o SEGUNDO atributo: ");
    scanf("%d", &opcao2);
    
    // ===== SWITCH ATRIBUTO 1 =====
    switch(opcao1){

        case 1:
            atributo1_c1 = populacao;
            atributo1_c2 = populacao2;
            break;

        case 2:
            atributo1_c1 = num_pontos_turisticos;
            atributo1_c2 = num_pontos_turisticos2;
            break;

        case 3:
            atributo1_c1 = area;
            atributo1_c2 = area2;
            break;

        case 4:
            atributo1_c1 = pib;
            atributo1_c2 = pib2;
            break;

        case 5:
            atributo1_c1 = pib_per_capita;
            atributo1_c2 = pib_per_capita2;
            break;

        case 6:
            atributo1_c1 = -densidade_populacional;
            atributo1_c2 = -densidade_populacional2;
            break;

        default:
            printf("Opcao invalida.\n");
            return 1;
    }

    // ===== SWITCH ATRIBUTO 2 =====
    switch(opcao2){

        case 1:
            atributo2_c1 = populacao;
            atributo2_c2 = populacao2;
            break;

        case 2:
            atributo2_c1 = num_pontos_turisticos;
            atributo2_c2 = num_pontos_turisticos2;
            break;

        case 3:
            atributo2_c1 = area;
            atributo2_c2 = area2;
            break;

        case 4:
            atributo2_c1 = pib;
            atributo2_c2 = pib2;
            break;

        case 5:
            atributo2_c1 = pib_per_capita;
            atributo2_c2 = pib_per_capita2;
            break;

        case 6:
            atributo2_c1 = -densidade_populacional;
            atributo2_c2 = -densidade_populacional2;
            break;

        default:
            printf("Opcao invalida.\n");
            return 1;
    }

    // ===== Comparação Final =====
    soma_carta1 = atributo1_c1 + atributo2_c1;
    soma_carta2 = atributo1_c2 + atributo2_c2;

    printf("\n===== RESULTADO =====\n");

    printf("%s (%s): %.2f pontos\n",
           cidade, codigo_carta, soma_carta1);

    printf("%s (%s): %.2f pontos\n",
           cidade2, codigo_carta2, soma_carta2);

    if(soma_carta1 > soma_carta2){

        printf("\nCarta vencedora: %s (%s)\n",
               cidade, codigo_carta);

    }
    else if(soma_carta2 > soma_carta1){

        printf("\nCarta vencedora: %s (%s)\n",
               cidade2, codigo_carta2);

    }
    else{

        printf("\nEmpate!\n");
    }

    return 0;
}

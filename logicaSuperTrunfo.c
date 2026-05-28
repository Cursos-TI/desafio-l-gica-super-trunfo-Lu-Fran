#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    //Criar variáveis das duas cartas:
    char estado[20], codigo_carta[5], cidade[30];
    int populacao, num_pontos_turisticos;
    float area, pib, densidade_populacional, pib_per_capita;

    char estado2[20], codigo_carta2[5], cidade2[30];
    int populacao2, num_pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    int opcao; //Variável switch
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    //Cadastrar 2 cartas
    printf("Estado: \n");
    scanf("%s", &estado);

    printf("Código carta: \n");
    scanf("%s", &codigo_carta);

    printf("Cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Quantidade pontos turísticos: \n");
    scanf("%d", &num_pontos_turisticos);
    
    printf("Área: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Estado Nº2: \n");
    scanf("%s", &estado2);

    printf("Código carta Nº2: \n");
    scanf("%s", &codigo_carta2);

    printf("Cidade Nº2: \n");
    scanf("%s", &cidade2);

    printf("População Nº2: \n");
    scanf("%d", &populacao2);

    printf("Quantidade pontos turísticos Nº2: \n");
    scanf("%d", &num_pontos_turisticos2);
    
    printf("Área Nº2: \n");
    scanf("%f", &area2);

    printf("Pib Nº2: \n");
    scanf("%f", &pib2);

    //Cálculo densidade Populacional: População / Área
    densidade_populacional = populacao / area;
    densidade_populacional2 = populacao2 / area2;
 
    //Cálculo PIB per capita: PIB / População
    pib_per_capita = pib / populacao;
    pib_per_capita2 = pib2 / populacao2;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    //Menu escolha comparativo
    printf("*** Menu ***\n");
    printf("1 - Escolha comparar populações\n");
    printf("2 - Escolha comparar pontos turísticos\n");
    printf("3 - Escolha comparar áreas\n");
    printf("4 - Escolha comparar pibs\n");
    printf("5 - Escolha comparar pibs per capita\n");
    printf("6 - Escolha comparar densidade populacional\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);
    
    switch (opcao){
        case 1:
            if (populacao > populacao2){
                printf("População da carta %s - %s é maior número - %d, venceu!\n", codigo_carta, estado, populacao);
            } else {
                printf("População da carta %s - %s é maior número - %d, venceu!\n", codigo_carta2, estado2, populacao2);
            }
            break;
        
        case 2:
            if (num_pontos_turisticos > num_pontos_turisticos2){
                printf("Cidade %s da carta %s tem mais pontos turísticos - %d, venceu!\n", cidade, codigo_carta, num_pontos_turisticos);
            } else {
                printf("Cidade %s da carta %s tem mais pontos turísticos - %d, venceu!\n", cidade2, codigo_carta2, num_pontos_turisticos2);
            }
            break;
        
        case 3:
            if (area > area2){
                printf("Cidade %s da carta %s tem maior área - %.2f, venceu!\n", cidade, codigo_carta, area);
            } else {
                printf("Cidade %s da carta %s tem maior área - %.2f, venceu!\n", cidade2, codigo_carta2, area2);
            }
            break;

        case 4:
            if (pib > pib2){
                printf("Cidade %s da carta %s tem maior pib - %.2f, venceu!\n", cidade, codigo_carta, pib);
            } else {
                printf("Cidade %s da carta %s tem maior pib - %.2f, venceu!\n", cidade2, codigo_carta2, pib2);
            }
            break;

        case 5:
            if (pib_per_capita > pib_per_capita2){
                printf("Cidade %s da carta %s tem maior pib per capita - %.2f, venceu!\n", cidade, codigo_carta, pib_per_capita);
            } else {
                printf("Cidade %s da carta %s tem maior pib per capita - %.2f, venceu!\n", cidade2, codigo_carta2, pib_per_capita2);
            }
            break;

        case 6:
            if (densidade_populacional < densidade_populacional2){
                printf("Cidade %s da carta %s tem menor densidade populacional - %.2f, venceu!\n", cidade, codigo_carta, densidade_populacional);
            } else {
                printf("Cidade %s da carta %s tem menor densidade populacional - %.2f, venceu!\n", cidade2, codigo_carta2, densidade_populacional2);
            }
            break;

        default:
            printf("Opção inválida. Tente novamente.\n");
    }

    return 0;
}

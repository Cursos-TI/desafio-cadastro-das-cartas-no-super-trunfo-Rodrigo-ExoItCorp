// Super Trunfo em C para o nível NOVATO
// Criado por Rodrigo Carvalho - GESTÃO DA TECNOLOGIA DA INFORMAÇÃO

// Declaro o Ambiente

#include <stdio.h>

int main() 

// Declaro variáveis

{

// Carta 1

char estado1; char codigo1[4]; char nomeCidade1[50]; int populacao1; float area1; float pib1; int pontosTuristicos1;

// Carta 2

char estado2; char codigo2[4]; char nomeCidade2[50]; int populacao2; float area2; float pib2; int pontosTuristicos2;

// Inputs Carta 1

    printf("Informe os dados da primeira carta:\n");
    
    printf("Estado: "); 
    scanf(" %c", &estado1);

    getchar();
    
    printf("Código da Carta: "); 
    scanf("%s", &codigo1);

    getchar();
    
    printf("Nome da Cidade: "); 
    scanf(" %[^\n]", nomeCidade1);
    
    printf("População: "); 
    scanf("%d", &populacao1);
    
    printf("Área (km²): "); 
    scanf("%f", &area1);
    
    printf("PIB: "); 
    scanf("%f", &pib1);
    
    printf("Número de Pontos Turísticos: "); 
    scanf("%d", &pontosTuristicos1);

// Inputs Carta 2

    printf("\nInforme os dados da segunda carta:\n");
    
    printf("Estado: ");
    scanf(" %c", &estado2);

    getchar();
    
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    
    getchar();
    
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    
    printf("População: ");
    scanf("%d", &populacao2);
    
    printf("Área (km²): ");
    scanf("%f", &area2);
    
    printf("PIB: ");
    scanf("%f", &pib2);
    
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

// Outputs

//1

    printf("\nDados da primeira carta:\n");

    printf("Estado: %c\n", estado1);

    printf("Código da Carta: %s\n", codigo1);

    printf("Nome da Cidade: %s\n", nomeCidade1);

    printf("População: %d\n", populacao1);

    printf("Área (km²): %.2f\n", area1);

    printf("PIB: %.2f\n", pib1);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

//2    

    printf("\nDados da segunda carta:\n");

    printf("Estado: %c\n", estado2);

    printf("Código da Carta: %s\n", codigo2);

    printf("Nome da Cidade: %s\n", nomeCidade2);

    printf("População: %d\n", populacao2);

    printf("Área (km²): %.2f\n", area2);

    printf("PIB: %.2f\n", pib2);

    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}

// Fim
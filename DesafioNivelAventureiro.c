#include <stdio.h>
int main(){

     //Declarando Tipo e Variáveis das duas cartas.
     char estado1[2], estado2[2];
     char codigo1[2], codigo2[2];
     char cidade1[15], cidade2[15];
     int populacao1, populacao2;
     float area1, area2;
     float pib1, pib2;
     float densidade1, densidade2;
     float capita1, capita2;
     int pontos1, pontos2;

      
     //solicitando informações para os usuários das carta1 e carta2.
     printf("Digite uma letra de A a H para representar o Estado: \n");
     scanf("%s", &estado1);
 
     printf("Digite um número de 01 a 04 para representar o código da carta: \n");
     scanf("%s", &codigo1);
 
     printf("Digite nome da cidade \n");
     scanf("%s", &cidade1);
 
     printf("Digite a população: \n");
     scanf("%d", &populacao1);
 
     printf("Digite a área total da cidade: \n");
     scanf("%f", &area1);
 
     printf("Digite o PIB: \n");
     scanf("%f", &pib1);
 
     printf("Digite o total de pontos turísticos: \n");
     scanf("%i", &pontos1);
 
     printf("Digite uma letra de A a H para representar o Estado: \n");
     scanf("%s", &estado2);
 
     printf("Digite um número de 01 a 04 para representar o código da carta: \n");
     scanf("%s", &codigo2);
 
     printf("Digite nome da cidade \n");
     scanf("%s", &cidade2);
 
     printf("Digite a população: \n");
     scanf("%d", &populacao2);
 
     printf("Digite a área total da cidade: \n");
     scanf("%f", &area2);
 
     printf("Digite o PIB: \n");
     scanf("%f", &pib2);
 
     printf("Digite o total de pontos turísticos: \n");
     scanf("%d", &pontos2);

     //cálculo da densidade demográfica carta 1;
     densidade1 = area1 / populacao1;

     //cálculo da renda per capita carta 1.
     capita1 = pib1 / populacao1;

     //cálculo da densidade demográfica carta 2;
     densidade2 = area2 / populacao2;

     //cálculo da renda per capita carta 2.
     capita2 = pib2 / populacao2;
     

     //Imprimindo dos dados solicitados pelo usuário.
     printf("CADASTROS DAS CARTAS SUPER TRUNFO\n\v");
 
     printf("Carta 1\n\v");
     printf("Estado: %s \n", estado1);
     printf("Código da Carta: %s%s \n", estado1, codigo1);     
     printf("Nome da Cidade: %s \n", cidade1);
     printf("População:%d \n", populacao1);
     printf("Área:%.1f Km² \n", area1);
     printf("PIB:%.1f bilhões de reais \n", pib1);
     printf("Número de pontos turístico: %i \n", pontos1);
     printf("Densidade Populacional: %f hab/km²\n", densidade1);
     printf("PIB Per Capita: %.1f reais\n\v", capita1);
     printf("Carta 2\n\v");
     printf("Estado: %s \n", estado2);
     printf("Código da Carta: %s%s \n", estado2, codigo2);
     printf("Nome da Cidade: %s \n", cidade2);
     printf("População: %d milhões \n", populacao2);
     printf("Área: %.1f Km² \n", area2);
     printf("PIB: %.1f bilhões de reais \n", pib2);
     printf("Número de pontos turístico: %d \n", pontos2);
     printf("Densidade Populacional: %f hab/km²\n", densidade2);
     printf("PIB Per Capita: %.1f reais\n ", capita2);

     return 0; 
 
}

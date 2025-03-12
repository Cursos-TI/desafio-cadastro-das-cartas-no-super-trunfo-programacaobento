#include <stdio.h>
int main(){
printf("Desafio Nivel Novato");

////Declarando Tipo e Variáveis das duas cartas.
char estado1[2], estado2[2];
char codigo1[2], codigo2[2];
char cidade1[15], cidade2[15];
int populacao1, populacao2;
float area1, area2;
float pib1, pib2;
int pontos1, pontos2;

//Lendo informações solicitada para os usuários das carta1 e carta2.
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

//Imprimindo dos dados solicitados pelo usuário.
printf("CADASTROS DAS CARTAS SUPER TRUNFO \n \v");

printf("Carta 1\n\v");
printf("Estado: %s \n", estado1);
printf("Código da Carta: %s%s \n", estado1, codigo1);
printf("Nome da Cidade: %s \n", cidade1);
printf("População:%d \n", populacao1);
printf("Área:%f Km² \n", area1);
printf("PIB:%f bilhões de reais \n", pib1);
printf("Número de pontos turístico: %i \n\v", pontos1);
printf("Carta 2\n\v");
printf("Estado: %s \n", estado2);
printf("Código da Carta: %s%s \n", estado2, codigo2);
printf("Nome da Cidade: %s \n", cidade2);
printf("População: %d milhões \n", populacao2);
printf("Área: %f Km² \n", area2);
printf("PIB: %f bilhões de reais \n", pib2);
printf("Número de pontos turístico: %d \n", pontos2);
    

return 0;

}

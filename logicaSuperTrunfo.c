#include <stdio.h>
#include <string.h>

int main() {

  char estado1;
  char codigo1[10];
  char cidade1[50];
  unsigned long populacao1;
  float area1;
  float pib1;
  int pontos1;
  float densidadePopulacional1;
  float pibPerCapita1;
  float inverso1;
  float pibReais1;
  float superPoder1;

  char estado2;
  char codigo2[10];
  char cidade2[50];
  unsigned long populacao2;
  float area2;
  float pib2;
  int pontos2;
  float densidadePopulacional2;
  float pibPerCapita2;
  float inverso2;
  float pibReais2;
  float superPoder2;

  printf("Cadastro da Carta 1\n");
  printf("Estado (A a H): ");
  scanf(" %c", &estado1);

  printf("Codigo da Carta: ");
  scanf("%s", codigo1);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade1);

  printf("Populacao: ");
  scanf("%lu", &populacao1);

  printf("Area (km2): ");
  scanf("%f", &area1);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib1);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos1);

  densidadePopulacional1 = populacao1 / area1;
  pibReais1 = pib1 * 1000000000;
  pibPerCapita1 = pibReais1 / populacao1;
  inverso1 = area1 / populacao1;

  superPoder1 = populacao1 + area1 + pibReais1 + pontos1 + pibPerCapita1 + inverso1;

  printf("\nCadastro da Carta 2\n");
  printf("Estado (A a H): ");
  scanf(" %c", &estado2);

  printf("Codigo da Carta: ");
  scanf("%s", codigo2);

  printf("Nome da Cidade: ");
  scanf(" %[^\n]", cidade2);

  printf("Populacao: ");
  scanf("%lu", &populacao2);

  printf("Area (km2): ");
  scanf("%f", &area2);

  printf("PIB (em bilhoes): ");
  scanf("%f", &pib2);

  printf("Numero de Pontos Turisticos: ");
  scanf("%d", &pontos2);

  densidadePopulacional2 = populacao2 / area2;
  pibReais2 = pib2 * 1000000000;
  pibPerCapita2 = pibReais2 / populacao2;
  inverso2 = area2 / populacao2;

  superPoder2 = populacao2 + area2 + pibReais2 + pontos2 + pibPerCapita2 + inverso2;

//    ===============Nivel Novato=============================================	
  printf("\nComparação de cartas (Atributo: Area):\n");

  printf("Carta 1 - %s: %.2f\n",cidade1,area1);
  printf("Carta 2 - %s: %.2f\n",cidade2,area2);

  if(area1 > area2){printf("Resultado: Carta 1 - %s venceu!\n",cidade1);}
  else{
	if(area2 > area1){printf("Resultado: Carta 2 - %s venceu!\n",cidade2);}
	else printf("As duas cidades possuem a mesma area\n");
  }
//   ===========================================================================
// =====================Nivel Aventureiro==========================================
int opcao;
printf("\nMenu Interativo\n");

printf("1 - Populacao\n");
printf("2 - Area\n");
printf("3 - PIB\n");
printf("4 - Numeros de pontos turisticos\n");
printf("5 - Densidade Demografica\n");

printf("Digite o numero do atributo:\n");
scanf("%d", &opcao);
while(opcao < 1 || opcao > 5){
	printf("Opcao Invalida\n");
	printf("Digite o numero do atributo:\n");
	scanf("%d", &opcao);
}

float valor1, valor2;
char nomeAtributo[50];
int regraInvertida = 0;

switch(opcao){
    case 1:
        valor1 = populacao1;
        valor2 = populacao2;
        strcpy(nomeAtributo, "Populacao");
        break;

    case 2:
        valor1 = area1;
        valor2 = area2;
        strcpy(nomeAtributo, "Area");
        break;

    case 3:
        valor1 = pib1;
        valor2 = pib2;
        strcpy(nomeAtributo, "PIB");
        break;

    case 4:
        valor1 = pontos1;
        valor2 = pontos2;
        strcpy(nomeAtributo, "Numero de Pontos Turisticos");
        break;

    case 5:
        valor1 = densidadePopulacional1;
        valor2 = densidadePopulacional2;
        strcpy(nomeAtributo, "Densidade Demografica");
        regraInvertida = 1; 
        break;
}        

printf("\n================ RESULTADO DA COMPARACAO ================\n");

printf("Cidade 1: %s\n", cidade1);
printf("Cidade 2: %s\n", cidade2);

printf("Atributo escolhido: %s\n", nomeAtributo);

printf("Valores:\n");
printf("%s: %.2f\n", cidade1, valor1);
printf("%s: %.2f\n", cidade2, valor2);

if (!regraInvertida) {
    if (valor1 > valor2)
        printf("Vencedor: Carta 1\n");
    else if (valor2 > valor1)
        printf("Vencedor: Carta 2\n");
    else
        printf("Empate!\n");
} else {
    // Regra especial: menor vence
    if (valor1 < valor2)
        printf("Vencedor: Carta 1\n");
    else if (valor2 < valor1)
        printf("Vencedor: Carta 2\n");

    else
        printf("Empate!\n");
}
// =================================================================================
	
}

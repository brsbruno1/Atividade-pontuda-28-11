#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char pessoas[5][200];
    int idade[5][5];
    float peso[5][5], maiorP = 0, menorP = 999;
    float altura[5][5], maiorA = 0, menorA = 999;
    int i, j, maiorI = 0, menorI = 999;

    for (i = 0; i < 2; i++)
    {
        printf("Pessoas: ");
        scanf("%s", pessoas[i]);
        for (j = 0; j < 1; j++)
        {
            printf("Idade: ");
            scanf("%i", &idade[i][j]);
            printf("Peso: ");
            scanf("%f", &peso[i][j]);
            printf("Altura: ");
            scanf("%f", &altura[i][j]);
            if (maiorI < idade[i][j])
            {
                maiorI = idade[i][j];
            }
            if (idade[i][j] < menorI)
            {
                menorI = idade[i][j];
            }

            if (peso[i][j] > maiorP)
            {
                maiorP = peso[i][j];
            }
            if (peso[i][j] < menorP)
            {
                menorP = peso[i][j];
            }

            if (altura[i][j] > maiorA)
            {
                maiorA = altura[i][j];
            }
            if (altura[i][j] < menorA)
            {
                menorA = altura[i][j];
            }
        }
        fflush(stdin);
    }

    printf("Exibindo dados\n");

    for (i = 0; i < 2; i++)
    {
        printf("\nPessoa: %s \n", pessoas[i]);
        for (j = 0; j < 1; j++)
        {
            printf("Idade:%i \n", idade[i][j]);

            printf("Peso:%f \n", peso[i][j]);

            printf("Altura:%f \n", altura[i][j]);
        }
    }
    printf("Maior idade: %i  | Menor idade: %i", maiorI, menorI);
    printf("\nMaior Peso: %f  | Menor peso: %f", maiorP, menorP);
    printf("\nMaior Altura: %f  | Menor altura: %f", maiorA, menorA);
    return 0;
}
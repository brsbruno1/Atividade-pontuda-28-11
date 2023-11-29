#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int num;
    char nome[999][200];
    char numerodTelefone[999][200];
    int i;
    int qnt = 0;

    do
    {
        printf("1 - Adicionar novo numero. \n");
        printf("2 - Exibir os numeros salvos. \n");
        printf("\nDigite a opção ");
        scanf("%d", &num);
      
        fflush(stdin);

        switch (num)
        {

        case 1:

            printf("Digite o nome de contato: ");
            gets(nome[qnt]);

            printf("Digite o numero do whatsapp: ");
            gets(numerodTelefone[qnt]);

            qnt++;
            break;

        case 2:

            for (i = 0; i < qnt; i++)
            {

                printf("Nome de Contato: %s \n", nome[i]);
                printf("Numero de Contato: %s \n", numerodTelefone[i]);
                printf("\n");
            }

            break;

        default:
            printf("Opção invalida. \n");
            break;
        }

    } while (num != 2);

    return 0;
}

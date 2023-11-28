#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    char alunos[5][200];
    float media [3], notas[5][3];
    int i, j;
    float somaNotas=0;
    int idade;


    
    

    for (i = 0; i < 5; i++)
    {
        printf("\nDigite o nome:", i + 1);
        gets(alunos[i]);

        printf("\nDigite a idade:", i + 1);
        scanf("%d", &idade);
        

        for (j = 0; j < 3; j++)
        {
            printf("\nDigite a %dª nota:", j + 1);
            scanf("%f", &notas[i][j]);
            somaNotas += notas[i][j];
            
    
        }

       fflush(stdin);

     media[i] = somaNotas / j;
     somaNotas = 0;
      
    } 

    printf("\n Exibindo os dados do aluno... \n");

    for (i = 0; i < 5; i++)
    {
        printf("\n Nome: %s \n", alunos[i]);

        printf("\n Idade: %d \n", &idade);

        for (j = 0; j < 3; j++)
        {
            printf("Nota: %.1f \n", notas[i][j]);
        }

        printf("Media: %2.f \n", media[i]);


        if (media[i] >= 7)
        {
            printf("Aprovado!");
        } else if (media[i] >= 5  && media[i] < 7){
            printf("Recuperação");
        } else {
            printf("Reprovado");
        }

    }

    return 0;
}
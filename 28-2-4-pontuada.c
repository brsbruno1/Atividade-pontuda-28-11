#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    int num[5], i;
    int somaMedia = 0, somaPares = 0, qntPares = 0;
    int qntImpares = 0, qntNegativos = 0;
    int maior = 0, menor;
    float mediaTotal, mediaPares;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %iª numero: ", i + 1);
        scanf("%d", &num[i]);
        if (num[i] % 2 == 0)
        {
            somaPares += num[i];
            qntPares++;
        }
        if (num[i] % 2 != 0)
        {
            qntImpares++;
        }
        if (num[i] < 0)
        {
            qntNegativos++;
        }
        if (num[i] > maior)
        {
            maior = num[i];
        }
        if (num[i] < menor)
        {
            menor = num[i];
        }
        somaMedia += num[i];
    }

    if (qntPares > 0)
    {
        mediaPares = (float)somaPares / qntPares;
    }
    else
    {
        mediaPares = 0;
    }

    mediaTotal = somaMedia / (float)i;

    printf("Quantidade de números ímpares: %d\n", qntImpares);
    printf("Quantidade de números negativos: %d\n", qntNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média Total: %.2f\n", mediaTotal);

    return 0;
}

#include <stdio.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    int num, i;
    int somaPares = 0, qntPares = 0;
    int qntImpares = 0, qntNegativos = 0;
    int maior, menor;
    float mediaPares, mediaTotal = 0;

    for (i = 0; i < 5; i++)
    {
        printf("Digite o %dª número: ", i + 1);
        scanf("%d", &num);
    }

    if (num % 2 == 0)
    {
        somaPares += num;
        qntPares++;
    }
    if (num % 2 != 0)
    {
        qntImpares++;
    }
    if (num < 0)
    {
        qntNegativos++;
    }
    if (i == 0 || num > maior)
    {
        maior = num;
    }
    if (i == 0 || num < menor)
    {
        menor = num;
    }

    mediaTotal += num;

    if (qntPares > 0)
    {
        mediaPares = (float)somaPares / qntPares;
    }
    else
    {
        mediaPares = 0;
    }

    mediaTotal /= 5;

    printf("Quantidade de números ímpares: %d\n", qntImpares);
    printf("Quantidade de números negativos: %d\n", qntNegativos);
    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);
    printf("Média de números pares: %.2f\n", mediaPares);
    printf("Média Total: %.2f\n", mediaTotal);

    return 0;
}

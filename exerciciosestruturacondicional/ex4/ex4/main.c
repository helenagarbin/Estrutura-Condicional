#include <stdio.h>
#include <stdlib.h>

int main()
{

    float num1, num2;   //nao foi dito que tipo de numero, float vai abranger qualquer um

    printf("Digite o primeiro numero:\n");
    scanf("%f", &num1);
    printf("Digite o segundo numero:\n");
    scanf("%f", &num2);

    if(num1 > num2)
    {
        printf("Maior:%.1f.\n", num1);
    }
    if (num2 > num1)
    {
        printf("Maior:%.1f.\n", num2);
    }
    if (num1 == num2)
    {
        printf("Os numeros sao iguais");
    }
    system("pause");
}

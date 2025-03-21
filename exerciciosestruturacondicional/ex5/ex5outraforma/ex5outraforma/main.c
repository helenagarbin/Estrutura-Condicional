#include <stdio.h>
#include <stdlib.h>

//calculadora com switch case
int main()
{
    int opcao;
    float num1, num2, resultado;

    printf("Digite 1 para somar\n");
    printf("Digite 2 para subtrair\n");
    printf("Digite 3 para multiplicar\n");
    printf("Digite 4 para dividir\n");
    scanf("%d", &opcao);

    printf("Insira o primeiro numero:\n");
    scanf("%f", &num1);
    printf("Insira o segundo numero:\n");
    scanf("%f", &num2);

    switch (opcao)
    {
        case 1:
            resultado = num1+num2;
            printf("Soma: %f.\n", resultado);
            break;
        case 2:
            resultado = num1-num2;
            printf("Subtracao: %f.\n", resultado);
            break;
        case 3:
            resultado = num1*num2;
            printf("Multiplicacao: %f.\n", resultado);
            break;
        case 4:
            if (num2 != 0)
            {
                resultado = num1/num2;
                printf("Divisao: %f.\n", resultado);
            }
            else
            {
                printf("Divisao por zero.\n");
            }
            break;
    }

    system("pause");
    return 0;
}

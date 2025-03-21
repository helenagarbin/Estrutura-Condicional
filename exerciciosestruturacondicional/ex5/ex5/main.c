#include <stdio.h>
#include <stdlib.h>

//calculadora

int main()
{
    int opcao;
    float num1, num2, resultado;
    //ler o que o usuario quer primeiro

    printf("Digite 1 para somar.\n");
    printf("Digite 2 para subtrair.\n");
    printf("Digite 3 para multiplicar.\n");
    printf("Digite 4 para dividir.\n");
    scanf("%d", &opcao);

    printf("Insira o primeiro numero:\n");
    scanf("%f", &num1);
    printf("Insira o segundo numero:\n");
    scanf("%f", &num2);

    // agora tem que fazer a logica que permite identificar o que ele escolheu

    if(opcao == 1)
    {
        resultado = num1 + num2;
        printf("Soma: %.2f.\n", resultado);
    }
    if (opcao == 2)
    {
        resultado = num1 - num2;
        printf("Subtracao: %.2f.\n", resultado);
    }
    if (opcao == 3)
    {
        resultado = num1*num2;
        printf("Multiplicacao: %.2f.\n", resultado);
    }
    if (opcao == 4)
    {
        if(num2 == 0)
        {
            printf("Divisao por zero\n");
        }
            else
            {
                resultado = num1/num2;
                printf("Divisao: %.2f.\n", resultado);
            }

    }
    system("pause");
    return 0;
}

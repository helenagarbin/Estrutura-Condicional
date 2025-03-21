#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    float trabalho, avaliacao, exame, media;

    printf("Insira a nota do trabalho de laboratorio:\n");
    scanf("%f", &trabalho);
    printf("Insira a nota da avaliacao semestral:\n");
    scanf("%f", &avaliacao);
    printf("Insira a nota do exame final:\n");
    scanf("%f", &exame);

    media = (trabalho*2 + avaliacao*3 + exame*5) / 10;
    printf("A média ponderada é: %.2f.\n", media);

    // nota maxima é 10 e minima 0
    if (media >= 0.0 && media <= 10.0)
    {
        if (media >= 8.0)
        {
            printf("Conceito A.\n");
        }
        else
        {
            if (media >= 7.0)
            {
                printf ("Conceito B.\n");
            }
            else
            {
                if (media >= 6.0)
                {
                    printf("Conceito C.\n");
                }
                else
                {
                    if (media >= 5.0)
                    {
                        printf("Conceito D.\n");
                    }
                    else
                    {
                        printf("Conceito E.\n");
                    }
                }
            }
        }
    }
    return 0;
}


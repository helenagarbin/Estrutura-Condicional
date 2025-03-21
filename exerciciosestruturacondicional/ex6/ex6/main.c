#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


// nota do estudante atribuida a 3 notas : um trab de lab, uma avaliação semestral e um exame final;
// peso das notas: trab (2), avaliação (3), exame (5)
// faca um programa que receba as tres notas, calcule e mostre a média ponderada e o conceito da tabela (mostrar a nota)
int main()
{
    setlocale(LC_ALL,"Portuguese");
    float trabalho, avaliacao, exame, media;

    printf("Digite a nota do trabalho de laboratorio:\n");
    scanf("%f", &trabalho);
    printf("Digite a nota da avaliacao semestral:\n");
    scanf("%f", &avaliacao);
    printf("Digite a nota do exame final:\n");
    scanf("%f", &exame);

    media = (trabalho*2 + avaliacao*3 + exame*5) / 10;
    printf("A media ponderada: %.2f.\n", media);


    //8,0 ~ 10,0 = A
    // nao consigo usar dois operadores relacionais, se utiliza se é uma coisa e outra, as duas expressões são verdadeiras  (&&)
    if (media >= 8.0 && media <= 10.0)   // condições complexas com conexao com operadores logicos
    {
        printf("Conceito A.\n");
    }
    // 7,0 ~ 8,0 = B
    if (media >= 7.0 && media < 8.0) // nao tem maior ou igual, porque ja esta na igualdade na comparacao de cima
    {
        printf("Conceito B.\n");
    }
    // 6,0 ~ 7,0 = C
    if (media >= 6.0 && media < 7.0)
    {
        printf("Conceito C.\n");
    }
    // 5,0 ~ 6,0 = D
    if (media >= 5.0 && media < 6.0)
    {
        printf("Conceito D.\n");
    }
    // 0,0 ~ 5,0 = E
    if (media >= 0.0 && media < 5.0)
    {
        printf("Conceito E.\n");
    }
    return 0;
}

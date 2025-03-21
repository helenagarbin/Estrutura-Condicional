#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m; // declarar variável, numero com virgula

    printf("Insira a nota:\n"); // imprimir para inserir
    scanf("%f", &m); // não esquecer do & no scanf

    if(m >= 7.0)
        {// estrutura de decisão, if é operador então não tem (;)
        printf("Aprovado(a)!\n");  // se for maior ou igual a 7, se for verdadeira imprimi na tela , se for falso ignora o if (como se a nota for 5 por exemplo)
        }
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m; // declarar vari�vel, numero com virgula

    printf("Insira a nota:\n"); // imprimir para inserir
    scanf("%f", &m); // n�o esquecer do & no scanf

    if(m >= 7.0)
        {// estrutura de decis�o, if � operador ent�o n�o tem (;)
        printf("Aprovado(a)!\n");  // se for maior ou igual a 7, se for verdadeira imprimi na tela , se for falso ignora o if (como se a nota for 5 por exemplo)
        }
}

#include <stdio.h>
#include <cs50.h> //adicionar a biblioteca cs50

int main(void)
{

    //get string é uma função específica da biblioteca do cs50!
    string nome = get_string("Qual é seu nome? \n");

    printf("olá,%s \n", nome);
}

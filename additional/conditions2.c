#include <cs50.h>
#include <stdio.h>

int main(void)
{
     // Solicita um caracter para o usuário
     char c = get_char("Você concorda?");

     // Verifica se concordou
     if (c == 'S' || c == 's')
     {
         printf("Concordo.\n");
     }
     else if (c == 'N' || c == 'n')
     {
        printf("Não concordo..\n");
     }
}
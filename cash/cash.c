#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //o valor da compra informado diretamente
    int Valor_da_Compra = 150;

    //texto exibido em tela
    printf("o valor total da compra é %i\n", Valor_da_Compra);

    //texto exibido em tela
    printf("Informe o valor do pagamento \n");

    //usuário entra com o valor x
    int Pagamento = get_int("Pagamento: ");
    printf("o pagamento realizado foi no valor de %i\n", Pagamento);

    int Troco = Pagamento - Valor_da_Compra;

    //exibe a soma dos valores fornecidos
    printf("o troco para o cliente será no valor de %i\n", Troco);
}
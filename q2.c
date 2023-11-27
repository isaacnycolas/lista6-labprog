#include <stdio.h>

#define TAM 30

struct estoque
{
    char nomePeca[TAM];
    int numPeca;
    float precoPeca;
    int numPedido;
};


int main(){
    struct estoque produto;
    puts("Digite o nome da peça:");
    scanf(" %s", &produto.nomePeca);
    puts("Digite o número da peça:");
    scanf(" %s", &produto.numPeca);
    puts("Digite o preço da peça:");
    scanf(" %s", &produto.precoPeca);
    puts("Digite o número do pedido da peça:");
    scanf(" %s", &produto.numPedido);

    printf("Nome: %s \n Número: %d \n Preço: %.2f \n Pedido: %d", produto.nomePeca, produto.numPeca, produto.precoPeca, produto.numPedido);
    return 0;
}
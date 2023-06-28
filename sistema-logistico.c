#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct produto
    {
        int idProduto;
        char descricao[500];
        float valorUnitario;
        int qtdEstoque;

    };
    struct carrinhoDeCompra
    {
        int idProduto;
        float descProduto;
        int qtdUnidadeComprada;
        float valorTotalPorProduto;
    };

    
    

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i, opcao;

    do
    {
        printf("------------------------\n");
        printf("   Sistema logístico    \n");
        printf("------------------------\n");

        printf("Menu: \n"); //menu de opções
        printf("1 - Cadastrar produto\n"); //leva a função cadastroProduto()
        printf("2 - entrada no estoque por produto\n");
        printf("3 - Venda de produto\n");
        printf("0 - sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastroProduto();
            break;        
        default:
            printf("[ERRO] Opção invalida!");
            break;
        }

    } while (opcao == 0);
    

    return 0;
}

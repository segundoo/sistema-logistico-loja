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

void cadastroProduto()
{
    setlocale(LC_ALL, "");

    struct produto pCadastro[99];
    int i = 0, opcao;
    /*do
    { */  //levantamento de dados do produto para cadastramento
        printf("Codigo do produto: ");
        fflush(stdin);
        scanf("%d", &pCadastro[0].idProduto);
        printf("");
        printf("Descrição do produto: ");
        fflush(stdin);
        scanf("%s", &pCadastro[1].descricao);
        printf("");
        printf("Valor unitário: R$");
        fflush(stdin);
        scanf("%2f", &pCadastro[1].valorUnitario);
        printf("");
        printf("Saldo em estoque: ");
        fflush(stdin);
        scanf("%d", &pCadastro[1].qtdEstoque);
        printf("");
        printf("");

        printf("Deseja continuar cadastrando?\n");
        printf("[1]SIM [2] Voltar ao menu principal\n");
        scanf("%d", &opcao);

        i++;
        if (opcao == 1)
        {
            cadastroProduto();
        } else {
            main();
        }

    /*} while (opcao == 2);*/
    
}    
    

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
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            cadastroProduto();
            break;    
        case 0:
            exit(0);
            break;
        default:
            printf("[ERRO] Opção invalida!");
            break;
        }

    } while (opcao != 0);
    
    return 0;
}
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

struct produto pCadastro[99];

void cadastroProduto() {
    setlocale(LC_ALL, "");

    int i = 0, opcao;
    //levantamento de dados do produto para cadastramento
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
        printf("[1] SIM [2] Voltar ao menu principal\n");
        scanf("%d", &opcao);

        i++;
        if (opcao == 1)
        {
            cadastroProduto();
        } else {
            main();
        }
    
}    

void listarProdutosCadastrados() {
    int i;

    do
    {
        printf("%d ", pCadastro[i].idProduto);
        printf("%d ", pCadastro[i].descricao);
        printf("%2f ", pCadastro[i].valorUnitario);
        printf("%d \n", pCadastro[i].qtdEstoque);
    } while (i < 99);
    
}
/*void entradaProdutos() {

}*/

int main() {
    setlocale(LC_ALL, "");

    int i, opcao, inEstoque;

    do
    {
        printf("------------------------\n");
        printf("   Sistema logístico    \n");
        printf("------------------------\n");

        printf("Menu: \n"); //menu de opções
        printf("1 - Cadastrar produto\n"); //leva a função cadastroProduto()
        printf("2 - entrada no estoque por produto\n"); //leva ao menu de "Entrada no estoque por produto"
        printf("3 - Venda de produto\n");
        printf("0 - sair\n");
        fflush(stdin);
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            system("cls");
            cadastroProduto();
            break;

        case 2:
            system("cls");
            printf("---------------------------------------\n");
            printf("     Entrada no estoque por produto    \n");
            printf("---------------------------------------\n");
            printf("1 - listar produtos cadastrados\n"); //leva a função listarProdutosCadastados
            printf("2 - entrada de produtos\n"); //leva a função entradasProdutos
            printf("0 - Voltar ao menu principal\n"); //volta ao menu inicial
            scanf("%d", &inEstoque);
            if (inEstoque == 1)
            {
                listarProdutosCadastrados();
            }
            
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
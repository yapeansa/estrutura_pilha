#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main()
{
    pilha *stack = criar();
    int opcao = 0;
    float v;

    do
    {
        printf("Escolha uma opção:\n");
        printf("(1) Empilhar (2) Desempilhar (3) Listar (4) Liberar\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            printf("Digite o elemento a ser empilhado: ");
            scanf("%f", &v);
            push(stack, v);
            break;
        case 2:
            v = pop(stack);
            if (v)
                printf("O elemento %.2f foi removido.\n", v);
            else
                printf("A pilha está vazia.\n");
            break;
        case 3:
            listar(stack);
            break;
        case 4:
            liberar(stack);
            break;
        default:
            printf("Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 4);

    return 0;
}

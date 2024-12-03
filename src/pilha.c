#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"
#define TAM 6

typedef struct pilha
{
    int n;
    float vet[TAM];
} pilha;

pilha *criar()
{
    pilha *p = (pilha *)malloc(sizeof(pilha));
    p->n = 0;
    return p;
}

void push(pilha *p, float v)
{
    if (p->n == TAM)
        printf("Pilha cheia.\n");
    else
    {
        p->vet[p->n] = v;
        p->n++;
    }
}

float pop(pilha *p)
{
    float v;

    if (p->n == 0)
        return 0;

    v = p->vet[p->n - 1];
    p->n--;
    return v;
}

void listar(pilha *p)
{
    if (p->n == 0)
        printf("Pilha vazia.\n");
    else
    {
        for (int j = 0; j < p->n; j++)
            printf("%.2f ", p->vet[j]);
        printf("\n");
    }
}

void liberar(pilha *p)
{
    printf("Liberando pilha...\n");
    free(p);
}

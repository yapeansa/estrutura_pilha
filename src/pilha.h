#ifndef PILHA
#define PILHA

typedef struct pilha pilha;
pilha *criar(void);
void push(pilha *p, float v);
float pop(pilha *p);
void listar(pilha *p);
void liberar(pilha *p);

#endif

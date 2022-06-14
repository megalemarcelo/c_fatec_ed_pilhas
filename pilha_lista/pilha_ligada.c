//  Autor: MARCELO ACERBI MEGALE
//  Data: 27/05/2022
//  Linguagem: C
//  Projeto: Implementação de pilha com listas simplesmente ligadas
//  Descricao: Estudo da estrutura de dados pilha, implementada com lista ligada.

#include "pilha_ligada.h"

void inicia_pilha(pilha *p) // inicializar uma pilha
{
    p->topo = NULL;
}

int pilha_vazia(pilha *p)
{
    return p->topo == NULL;
}

void push(pilha *p, int i) // adiciona um elemento na pilha
{
    struct no *novo = constroi_no(i);

    if (!pilha_vazia(p))
    {
        novo->prox = p->topo;
    }

    p->topo = novo;
}

int pop(pilha *p) // exclui o topo da pilha
{
    int i = p->topo->info;
    struct no *aux = p->topo;
    p->topo = p->topo->prox;
    free(aux);
    return i;
}

int peek(pilha *p) // retorna o primeiro elemento da pilha
{
    return p->topo->info;
}

void exibe_pilha(pilha *p) // imprime a pilha
{
    struct no *aux = p->topo;

    while (aux != NULL)
    {
        printf("%d ", aux->info);
        aux = aux->prox;
    }

    printf("\n");
}
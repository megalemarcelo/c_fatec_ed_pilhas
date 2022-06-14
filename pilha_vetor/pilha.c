//  Autor: MARCELO ACERBI MEGALE
//  Data: 27/05/2022
//  Linguagem: C
//  Projeto: Implementação de pilha com vetor
//  Descricao: Estudo da estrutura de dados pilha, implementada com vetor.

#include "pilha.h"

void inicia_pilha(pilha *p, int t)
{
    p->dados = (int *)malloc(t * sizeof(int));
    p->topo = 0;
    p->capacidade = t;
}

int pilha_vazia(pilha *p)
{
    return p->topo == 0;
}

int pilha_cheia(pilha *p)
{
    return p->topo == p->capacidade;
}

void push(pilha *p, int i)
{
    p->dados[p->topo++] = i; // pós incremento do topo
}

int pop(pilha *p)
{
    return p->dados[--p->topo]; // pré decremento do topo
}

int peek(pilha *p)
{
    return p->dados[p->topo - 1]; // consulta
}

void exibe_pilha(pilha *p)
{
    int i;
    for (i = p->topo - 1; i >= 0; i--)
        printf("%d ", p->dados[i]);
    printf("\n");
}
//  Autor: MARCELO ACERBI MEGALE
//  Data: 27/05/2022
//  Linguagem: C
//  Projeto: Implementação de pilha com listas simplesmente ligadas
//  Descricao: Estudo da estrutura de dados pilha, implementada com lista ligada.

#include "no.h"

typedef struct
{
    struct no *topo;
} pilha;

void inicia_pilha(pilha *);

int pilha_vazia(pilha *);

int pilha_cheia(pilha *);

void push(pilha *, int);

int pop(pilha *);

int peek(pilha *);

void exibe_pilha(pilha *);
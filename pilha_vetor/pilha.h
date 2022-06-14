//  Autor: MARCELO ACERBI MEGALE
//  Data: 27/05/2022
//  Linguagem: C
//  Projeto: Implementação de pilha com vetor
//  Descricao: Estudo da estrutura de dados pilha, implementada com vetor.

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int topo;
    int *dados;
    int capacidade;
} pilha;

void inicia_pilha(pilha *, int);

int pilha_vazia(pilha *);

int pilha_cheia(pilha *);

void push(pilha *, int);

int pop(pilha *);

int peek(pilha *);

void exibe_pilha(pilha *);
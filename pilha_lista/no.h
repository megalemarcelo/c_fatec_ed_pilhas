//  Autor: MARCELO ACERBI MEGALE
//  Data: 27/05/2022
//  Linguagem: C
//  Projeto: Implementação de pilha com listas simplesmente ligadas
//  Descricao: Estudo da estrutura de dados pilha, implementada com lista ligada.

#include <stdlib.h>
#include <stdio.h>

struct no
{
    int info; // contém a informação do nó
    struct no *prox; // aponta para o próximo nó
};

struct no *constroi_no(int);
//  Autor: MARCELO ACERBI MEGALE
//  Data: 27/05/2022
//  Linguagem: C
//  Projeto: Implementação de pilha com listas simplesmente ligadas
//  Descricao: Estudo da estrutura de dados pilha, implementada com lista ligada.

#include "no.h"

struct no *constroi_no(int i)
{
    struct no *novo_no;
    novo_no = (struct no *)malloc(sizeof(struct no));
    
    if (novo_no != NULL)
    {
        novo_no->info = i;
        novo_no->prox = NULL;
    }

    return novo_no;
}
//  Autor: MARCELO ACERBI MEGALE
//  Data: 27/05/2022
//  Linguagem: C
//  Projeto: Implementação de pilha com listas simplesmente ligadas
//  Descricao: Estudo da estrutura de dados pilha, implementada com lista ligada.

#include "pilha_ligada.h"
#include <time.h>

int main()
{
    pilha p;
    int i;
    inicia_pilha(&p);
    srand(time(0));

    do
    {
        if (rand() % 2) // se o número for par, empilhar
        {
            push(&p, rand() % 10);
        }
        else // se não for par, desempilhar
        {
            if (!pilha_vazia(&p))
            {
                i = pop(&p);
            }
        }
        exibe_pilha(&p);
    } while (!pilha_vazia(&p));

    return 0;
}
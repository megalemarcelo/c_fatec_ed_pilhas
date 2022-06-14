//  Autor: MARCELO ACERBI MEGALE
//  Data: 27/05/2022
//  Linguagem: C
//  Projeto: Implementação de pilha com vetor
//  Descricao: Estudo da estrutura de dados pilha, implementada com vetor.

#include "pilha.h"
#include <time.h>

int main()
{
    pilha p;
    int capacidade, i;

    printf("digite a capacidade da pilha: ");
    scanf("%d", &capacidade);

    inicia_pilha(&p, capacidade);

    srand(time(0)); // inicializa gerador randômico

    do
    {
        if (rand() % 2) // se o número for par, empilhar
        {
            if (!pilha_cheia(&p))
            {
                push(&p, rand() % 10); // se a pilha não estiver cheia, push com número aleatório módulo de 10
            }
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
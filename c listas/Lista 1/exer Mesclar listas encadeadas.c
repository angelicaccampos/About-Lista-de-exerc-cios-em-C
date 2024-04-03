/**
 * @file exer Mesclar listas encadeadas.c
 * @author Angelica C Campos
 * @brief
 * @version 0.1
 * @date 2024-04-02
 *
 * @copyright Copyright (c) 2024
 *
 */

/*
Mesclar listas encadeadas
Considere uma lista encadeada com nó cabeça le definida por células

typedef struct celula {
   int dado;
   struct celula *prox;
} celula;
Faça uma função

void mescla_listas (celula *l1, celula *l2, celula *l3);
que recebe duas listas encadeadas, encabeçadas por l1 e l2, cujo conteúdo está ordenado em ordem não decrescente, e gere uma nova lista encabeçada por l3 que contém os elementos de l1 e l2 ordenados.

Observações

Você não deve alocar nenhuma nova célula na sua função, apenas manipular os ponteiros dos nós de l1 e l2 para que estejam em l3.

Você deve considerar que o nó cabeça l3 já foi alocado antes da chamada para a função mescla_listas.

As listas encabeçadas por l1 e l2 não precisam estar intactas após a chamada à sua função.

Exemplos
Suponha, por exemplo, que a lista l1 seja

l1 -> 1 -> 7 -> 9 -> 10 -> NULL
e a lista l2 seja

l2 -> 2 -> 3 -> 8 -> NULL
Sua função deve montar a lista l3 da seguinte forma

l3 -> 1 -> 2 -> 3 -> 7 -> 8 -> 9 -> 10 -> NULL
*/

#include <stdio.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void mescla_listas(celula *l1, celula *l2, celula *l3);

void mescla_listas(celula *l1, celula *l2, celula *l3)
{
    celula *atuall1 = l1->prox;
    celula *atuall2 = l2->prox;
    celula *atuall3 = l3; // lista resultnte

    // percorre as lista não vazias
    while (atuall1 != NULL && atuall2 != NULL)
    {
        // compara os elementos das listas
        if (atuall1->dado <= atuall2->dado)
        {
            // armazenam na l3 o menor elemento da l1
            atuall3->prox = atuall1;
            // vai para o proximo elemento de l1
            atuall1 = atuall1->prox;
        }
        // continua para a l2
        else
        {
            atuall3->prox = atuall2;
            atuall2 = atuall2->prox;
        }
        // avança para a l3
        atuall3 = atuall3->prox;
    }

    // resto de elementos da l1 adicionados em l3
    while (atuall1 != NULL)
    {
        atuall3->prox = atuall1;
        atuall1 = atuall1->prox;
        atuall3 = atuall3->prox;
    }

    // resto de elementos da l2 adicionados em l3
    while (atuall2 != NULL)
    {
        atuall3->prox = atuall2;
        atuall2 = atuall2->prox;
        atuall3 = atuall3->prox;
    }

    // indica o ultimo elemento da l3 como NULL
    atuall3->prox = NULL;   
}

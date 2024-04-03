/**
 * @file exer Listas encadeadas - remocao.c
 * @author Angélica C Campos
 * @brief
 * @version 0.2
 * @date 2024-04-02
 *
 * @copyright Copyright (c) 2024
 *
 */

/*
remove_depois(celula *p):

1.Esta função remove o elemento imediatamente após o nó apontado por p na lista encadeada.
Ela começa verificando se p ou p->prox é NULL, o que indicaria que não há um próximo elemento a ser removido.
Se houver um próximo elemento, a função define um ponteiro lixo para apontar para o nó a ser removido, atualiza o ponteiro prox do nó p para apontar para o próximo nó após o nó a ser removido, e finalmente libera a memória alocada para o nó removido.
A função retorna 1 se a remoção for bem-sucedida e 0 caso contrário.
remove_elemento(celula *le, int x):

2.Esta função remove a primeira ocorrência do valor x na lista encadeada.
Ela inicializa dois ponteiros, atual e anterior, apontando para o início da lista e para o primeiro nó da lista, respectivamente.
A função percorre a lista enquanto o nó atual não for NULL.
Para cada nó, ela verifica se o valor dado é igual a x. Se encontrar, atualiza o ponteiro prox do nó anterior para apontar para o próximo nó após o nó atual, e libera a memória alocada para o nó atual.
Se a remoção for bem-sucedida, a função retorna.
remove_todos_elementos(celula *le, int x):

3.Esta função remove todas as ocorrências do valor x na lista encadeada.
Assim como na função anterior, ela inicializa dois ponteiros, anterior e atual, e percorre a lista enquanto o nó atual não for NULL.
Se encontrar um nó com valor x, a função atualiza o ponteiro prox do nó anterior para apontar para o próximo nó após o nó atual, libera a memória alocada para o nó atual e move o ponteiro atual para o próximo nó.
A função continua esse processo até percorrer toda a lista.
*/

#include <stdio.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

int remove_depois(celula *p);
void remove_elemento(celula *le, int x);
void remove_todos_elementos(celula *le, int x);

// função que remove o elemento imediatamente seguinte do ponteiro p
int remove_depois(celula *p)
{
    if (p == NULL || p->prox == NULL)
        return 0;

    celula *lixo;

    lixo = p->prox;
    p->prox = lixo->prox;

    free(lixo);
    return 1;
}

// função que remove a primeira ocorrência de x da lista
void remove_elemento(celula *le, int x)
{
    celula *atual = le;
    celula *anterior = le->prox;

    // percurre a lista enquanto não estiver vazia
    while (atual != NULL)
    {
        // compara os elementos
        if (atual->dado == x)
        {
            anterior->prox = atual->prox;
            // libera a memória alocada
            free(atual);
            //sair imediatamente da função
            return;
        }
        //avança para o próximo nó e continua a percorrer a lista
        anterior = atual;
        atual = atual->prox;
    }
}

// função que remove todas as ocorrências de x da lista
void remove_todos_elementos(celula *le, int x)
{
    celula *anterior = le;
    celula *atual = le->prox;

    // percurre a lsita se não estiver vazia
    while (atual != NULL)
    {
        // compara os elementos
        if (atual->dado == x)
        {
            anterior->prox = atual->prox;
            celula *proxLixo = atual;

            atual = atual->prox;

            free(proxLixo);
        }
        else
        {
            anterior = atual;
            atual = atual->prox;
        }
    }
}

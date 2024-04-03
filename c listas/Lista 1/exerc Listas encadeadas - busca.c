/**
 * @file exerc Listas encadeadas - busca.c
 * @author Angelica C Campos 
 * @brief 
 * @version 0.2
 * @date 2024-04-02
 * 
 * @copyright Copyright (c) 2024
 * 
 */

/*
busca(le, x):
Esta função realiza uma busca iterativa pela primeira ocorrência do elemento x na lista encadeada.
Ela recebe um ponteiro para o nó cabeça le da lista e o valor x que deseja-se buscar.
A função começa definindo um ponteiro atual para o segundo nó da lista, ignorando o nó cabeça.
Em seguida, entra em um loop while que percorre a lista enquanto o ponteiro le não for NULL.
Para cada nó, verifica se o valor dado do nó atual é igual a x. Se encontrar uma correspondência, retorna um ponteiro para esse nó.
Se o elemento não for encontrado em nenhum nó da lista, a função retorna NULL.

busca_rec(le, x):
Esta função realiza uma busca recursiva pela primeira ocorrência do elemento x na lista encadeada.
Ela também recebe um ponteiro para o nó cabeça le da lista e o valor x a ser buscado.
A função é implementada utilizando recursão. Ela começa verificando se o nó atual é NULL. Se for, significa que o final da lista foi alcançado e o elemento não foi encontrado, então retorna NULL.
Se o nó atual contiver o elemento x, retorna um ponteiro para esse nó.
Caso contrário, chama a função recursivamente passando o próximo nó da lista como argumento.
Ambas as funções têm o mesmo propósito, mas uma é implementada de forma iterativa e a outra de forma recursiva. 
*/

#include <stdio.h>

typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

celula *busca(celula *le, int x);
celula *busca_rec(celula *le, int x);

// procura pela primeira ocorrência do elemento x na lista encadeada e devolve um ponteiro para a célula que o contém.
celula *busca(celula *le, int x)
{
    // ignora o nó cabeça
    celula *atual = le->prox;

    while (atual != NULL)
    {
        // compara os elementos
        if (atual->dado == x)
        {
            // retorna o ponteiro com o elemento x
            return atual;
        }

        // avança para o próximo nó
        atual = atual->prox;
    }
    return NULL;
}

// Uma função que faz o mesmo que o item 3, mas recursiva
celula *busca_rec(celula *le, int x)
{
    if (le == NULL)
    {
        return NULL;
    }

    if (le->dado == x)
    {

        return le;
    }

    return busca_rec(le->prox, x);
}

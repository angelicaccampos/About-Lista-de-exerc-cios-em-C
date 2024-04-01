#include <stdio.h>

// Definição da estrutura da célula da lista encadeada
typedef struct celula {
    int dado;
    struct celula *prox;
} celula;

// Protótipo da função para imprimir a lista encadeada de forma iterativa
void imprime(celula *le);

// Protótipo da função para imprimir a lista encadeada de forma recursiva
void imprime_rec(celula *le);

// Função para imprimir a lista encadeada de forma iterativa
void imprime(celula *le) {
    // Verifica se a lista está vazia
    if (le->prox == NULL) {
        printf("NULL\n");
        return;
    }

    // Percorre a lista e imprime os elementos
    celula *atual = le->prox;
    while (atual != NULL) {
        printf("%d", atual->dado);
        if (atual->prox != NULL) {
            printf(" -> ");
        } else {
            printf(" -> NULL\n");
        }
        atual = atual->prox;
    }
}

// Função auxiliar recursiva para imprimir a lista encadeada
void imprime_rec_aux(celula *le) {
    // Caso base: se a lista está vazia, imprime NULL e retorna
    if (le == NULL) {
        printf("NULL\n");
        return;
    }

    // Imprime o dado da célula atual
    printf("%d", le->dado);

    // Se há um próximo elemento, imprime a seta e chama a função recursivamente
    if (le->prox != NULL) {
        printf(" -> ");
        imprime_rec_aux(le->prox);
    } else {
        printf(" -> NULL\n");
    }
}

// Função para imprimir a lista encadeada de forma recursiva
void imprime_rec(celula *le) {
    // Chama a função auxiliar recursiva
    imprime_rec_aux(le->prox);
}
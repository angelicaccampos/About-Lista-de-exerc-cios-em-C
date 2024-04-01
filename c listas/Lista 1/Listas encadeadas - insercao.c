#include <stdio.h>

// Definição da estrutura da célula da lista encadeada
// Aqui é definida a estrutura de uma célula da lista encadeada, contendo um inteiro (dado) e um ponteiro para a próxima célula (prox).
typedef struct celula
{
    int dado;
    struct celula *prox;
} celula;

void insere_inicio(celula *le, int x);
void insere_antes(celula *le, int x, int y);

void insere_inicio(celula *le, int x)
{
    // cria uma nova celula
    celula *nova;
    // cria uma nova célula alocando dinamicamente memória
    nova = malloc(sizeof(celula));
    // prenche a celula
    nova->dado = x;
    // faz a nova celula apontar para o proximo elemento
    nova->prox = le->prox;
    // o novo aponta para o proximo novo elemento
    le->prox = nova;
}

void insere_antes(celula *le, int x, int y)
{
    // cria uma nova celula
    celula *nova;
    // cria uma nova célula alocando dinamicamente memória
    nova = malloc(sizeof(celula));

    if (nova == NULL)
    {

        exit(1);
    }

    nova->dado = x;
    
    // guarda o elemento antigo no atual
    celula *anterior = le;
    // guardo o primeiro elemento da lista
    celula *atual = le->prox;

    // procura o elemento igual a y ou fim da lista NULL
    while (atual != NULL && atual->dado != y)
    {
        // o anterior vira atual
        anterior = atual;
        // atual aponta para o proximo
        atual = atual->prox;
    }

    if (atual != NULL)
    {
        // a nova celula que aponta para o proximo vira atual
        nova->prox = atual;
        // a celula anterior que aponta para o proximo vira nova
        anterior->prox = nova;
    }
    else
    {
        // caso não tenha referencia o valor vira NULL, ou seja, vai para o ultimo da lsita
        anterior->prox = nova;
        nova->prox = NULL;
    }
}

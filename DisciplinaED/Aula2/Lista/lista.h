#ifndef Lista_H
#define Lista_H

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

No* criarNo(int valor) {
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;
    return novo;
}

void inserirInicio(No **lista, int valor) {
    No* novo = criarNo(valor);
    novo->proximo = *lista;
    *lista = novo;
}

void imprimirLista(No *lista) {
    while (lista != NULL) {
        printf("%d -> ", lista->valor);
        lista = lista->proximo;
    }
    printf("NULL\n");
}

int main() {
    No* lista = NULL;

    inserirInicio(&lista, 10);
    inserirInicio(&lista, 20);
    inserirInicio(&lista, 30);

    imprimirLista(lista);

    return 0;
}

#include "Lista.c"
#endif

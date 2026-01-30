#ifndef Lista_H
#define Lista_H

#include <stdio.h>
#include <stdlib.h>

typedef struct No {
    int valor;
    struct No *proximo;
} No;

typedef struct No {
    No inicio;
} Lista;

No* criarNo(int valor); 

void inserirInicio(No **lista, int valor);

void imprimirLista(No *lista);

#endif

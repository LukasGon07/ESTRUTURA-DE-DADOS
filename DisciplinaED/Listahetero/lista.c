#include <stdlib.h>
#include <math.h>
#include "list.h"

typedef struct retangulo {
    float b;
    float h;
} retangulo;

typedef struct triangulo {
    float b;
    float h;
} triangulo;

typedef struct circulo {
    float r;
} circulo;

#define RETANGULO 0
#define TRIANGULO 1
#define CIRCULO   2

struct listaHet {
    int tipo;
    void* info;
    struct listaHet* prox;
};

listaHet* cria_ret(float b, float h) {
    listaHet* p = malloc(sizeof(listaHet));
    retangulo* r = malloc(sizeof(retangulo));

    r->b = b;
    r->h = h;

    p->tipo = RETANGULO;
    p->info = r;
    p->prox = NULL;

    return p;
}

listaHet* cria_tri(float b, float h) {
    listaHet* p = malloc(sizeof(listaHet));
    triangulo* t = malloc(sizeof(triangulo));

    t->b = b;
    t->h = h;

    p->tipo = TRIANGULO;
    p->info = t;
    p->prox = NULL;

    return p;
}

listaHet* cria_cir(float r) {
    listaHet* p = malloc(sizeof(listaHet));
    circulo* c = malloc(sizeof(circulo));

    c->r = r;

    p->tipo = CIRCULO;
    p->info = c;
    p->prox = NULL;

    return p;
}

float calculaArea(listaHet* p) {
    if (p == NULL) return 0;

    switch (p->tipo) {
        case RETANGULO: {
            retangulo* r = p->info;
            return r->b * r->h;
        }
        case TRIANGULO: {
            triangulo* t = p->info;
            return (t->b * t->h) / 2;
        }
        case CIRCULO: {
            circulo* c = p->info;
            return M_PI * c->r * c->r;
        }
        default:
            return 0;
    }
}

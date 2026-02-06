#ifndef LISTA_HET
#define LISTA_HET
typedef struct listaHet {
int tipo;
void* info;
struct listaHet* prox;
}listaHet;

typedef struct retangulo{
float b;
float h;
}retangulo;

typedef struct circulo{
float r;
}circulo;

typedef struct triangulo{
float b;
float h;
}triangulo;

listaHet* cria_ret (float b, float h);
listaHet* cria_tri (float b, float h);
listaHet* cria_cir (float r);
float calculaArea (listaHet* p);

#endif

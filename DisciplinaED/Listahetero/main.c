#include <stdio.h>
#include "list.h"

int main() {
    listaHet* r = cria_ret(5.0, 3.0);
    listaHet* t = cria_tri(4.0, 6.0);
    listaHet* c = cria_cir(2.0);

    printf("Area do retangulo: %.2f\n", calculaArea(r));
    printf("Area do triangulo: %.2f\n", calculaArea(t));
    printf("Area do circulo: %.2f\n", calculaArea(c));

    return 0;
}

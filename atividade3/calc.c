// calc.c

#include <stdio.h>
#include <stdlib.h>
#include "calc.h"

struct calculadora {
    float ultimoResultado;
};

Calculadora *criaCalculadora() {
    Calculadora *c = (Calculadora*) malloc(sizeof(Calculadora));
    if (c != NULL) {
        c->ultimoResultado = 0.0;
    }
    return c;
}

void liberaCalculadora(Calculadora *c) {
    free(c);
}

void soma(Calculadora *c, float a, float b) {
    c->ultimoResultado = a + b;
}

void subtrai(Calculadora *c, float a, float b) {
    c->ultimoResultado = a - b;
}

void multiplica(Calculadora *c, float a, float b) {
    c->ultimoResultado = a * b;
}

void divide(Calculadora *c, float a, float b) {
    if (b != 0)
        c->ultimoResultado = a / b;
    else {
        printf("Erro: divisao por zero\n");
        c->ultimoResultado = 0.0;
    }
}

float acessaUltimoResultado(Calculadora *c) {
    return c->ultimoResultado;
}


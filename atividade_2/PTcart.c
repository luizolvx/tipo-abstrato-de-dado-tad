#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "PTcart.h" //inclui os protótipos

//definição de tipos de dados - este modelo não é exportado
struct pontoCartesiano{
    float x;
    float y;
};

//aloca e retorna um PTcart com coordenadas "x" e "y"
PTcart *criaPTcart(float x, float y)
{
    PTcart *p = (PTcart*) malloc(sizeof(PTcart));
    if(p!=NULL){
        p->x = x;
        p->y= y;
    }
    return p;
}

//libera a memória alocada para um PTcart
void liberaPTcart(PTcart *p){
    free(p);
}

//recupera, por referencia o valor de um PTcart
void acessaPTcart(PTcart *p, float *x, float *y){
    *x = p->x;
    *y = p->y;
}

//Atribui a um PTcart coordenadas "x" e "y"
void atribuiPTcart(PTcart *p, float x, float y){
    p->x = x;
    p->y = y;
}

//Calcula a distância entre dois PTcarts
float distanciaPTcart(PTcart *p1, PTcart *p2) {
    float dx = p1->x - p2->x;
    float dy = p1->y - p2->y;
    return sqrt(dx * dx + dy * dy);
}


// calc.h

#ifndef CALC_H
#define CALC_H

// Define o tipo opaco Calculadora
typedef struct calculadora Calculadora;

// Cria uma nova calculadora
Calculadora *criaCalculadora();

// Libera a memória alocada para a calculadora
void liberaCalculadora(Calculadora *c);

// Operações básicas
void soma(Calculadora *c, float a, float b);
void subtrai(Calculadora *c, float a, float b);
void multiplica(Calculadora *c, float a, float b);
void divide(Calculadora *c, float a, float b);

// Acessa o último resultado
float acessaUltimoResultado(Calculadora *c);

#endif


# TAD em C: Calculadora e Pontos Cartesianos

Este repositório contém dois projetos em linguagem C que demonstram a implementação de **Tipos Abstratos de Dados (TAD)**:

1. **Calculadora** com operações básicas  
2. **Pontos Cartesianos** com cálculo de distância  

## Objetivo
Demonstrar práticas de modularização, encapsulamento e uso de TAD em C, com foco em:
- Estruturas opacas
- Alocação dinâmica de memória
- Interfaces bem definidas
- Reusabilidade de código

## Estrutura do Projeto

.
├── calculadora/  
│ ├── calc.h  
│ ├── calc.c  
│ └── main.c  
├── pontos_cartesianos/  
│ ├── PTcart.h  
│ ├── PTcart.c  
│ └── main.c  
├── .gitignore  
└── README.md  

## Projeto 1: Calculadora
### Funcionalidades
- Operações básicas: soma, subtração, multiplicação, divisão
- Armazenamento do último resultado
- Tratamento de erro para divisão por zero

## Projeto 2: Pontos Cartesianos
### Funcionalidades
- Criação e liberação de pontos acesso e modificação de coordenadas
- Cálculo de distância entre pontos

### Tecnologias Utilizadas
- Linguagem C
- Compilador GCC
- Bibliotecas padrão: stdio.h, stdlib.h, math.h
- Conceitos Aplicados
- Tipos Abstratos de Dados (TAD)
- Alocação dinâmica de memória
- Encapsulamento com structs opacas
- Modularização de código
- Makefiles para compilação


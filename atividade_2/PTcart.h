//arquivo PTcart.h
//atribui novo nome para struct pontoCartesiano: PTcart
typedef struct pontoCartesiano PTcart;

//cria um novo PTcart - somente ponteiro!!
PTcart *criaPTcart(float x, float y);

//Libera um PTcart
void liberaPTcart(PTcart *p);

//acessa Valores "x" e "y" de um PTcart
void acessaPTcart(PTcart *p, float *x, float *y);

//Atribui os valores "x" e "Y" a um PTcart
void atribuiPTcart(PTcart *p, float x, float y);

//Calcula a distancia entre dois pontos no plano cartesiano
float distanciaPTcart(PTcart *p1, PTcart *p2);

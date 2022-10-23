#include <iostream>
#include "matrizquadrada.h"
/* ... Declaracao e implementacao do TAD MatrizQuadrada ... */
void main(void)
{
    MatrizQuadrada M1, M2, M3, I, R, T;
    leMatriz(M1);               /* Le uma matriz nxn */
    criaMatrizIdentidade(I, 3); /* Cria uma matriz identidade de tamanho n */
    produto(M1, I, R);          /* R = M1*I */
    if (compara(A, R))
    {
        cout << " Matrizes iguais !";
    }
    else
    {
        cout << " Matrizes diferentes !";
    }
    imprimeMatriz(M1);
    imprimeMatriz(R);
    criaTransposta(R, T); /* T = transposta de R*/
    leMatriz(M2);         /* Le uma matriz nxn */
    soma(R, M2, M3);      /* M3 = R+M2 */
    imprimeMatriz(M2);
    imprimeMatriz(M3);
}

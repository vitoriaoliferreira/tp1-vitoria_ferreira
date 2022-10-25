#include <iostream>
#include "matrizquadrada.h"

int main(void){
    MatrizQuadrada M1 = MatrizQuadrada();
    MatrizQuadrada M2 = MatrizQuadrada();
    MatrizQuadrada M3 = MatrizQuadrada();
    MatrizQuadrada I = MatrizQuadrada();
    MatrizQuadrada R = MatrizQuadrada();
    MatrizQuadrada T = MatrizQuadrada(); 


    M1.leMatriz();
    M2.leMatriz();

    std::cout << "Matriz 1: " << std::endl;
    M1.imprimeMatriz(); 
    std::cout << "Matriz 2: " << std::endl;
    M2.imprimeMatriz();

    if (R.compara(M1,M2)){
        std::cout << "Matrizes iguais!\n";
    }
    else{
        std::cout << "Matrizes diferentes!\n";
    }
    
    I.criaMatrizIdentidade();
    std::cout << "Matriz Identidade: " << std::endl;
    I.imprimeMatriz();

    R.produto(M1,I);
    std::cout << "Produto das Matrizes: " << std::endl; 
    R.imprimeMatriz();

    M3.soma(M2,R);
    std::cout << "Soma das Matrizes: " << std::endl;
    M3.imprimeMatriz();

    T.criaTransposta(R);
    std::cout << "Matriz Transposta: " << std::endl;
    T.imprimeMatriz();
    


}
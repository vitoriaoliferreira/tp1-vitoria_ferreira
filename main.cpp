#include <iostream>
#include "matrizquadrada.h"

int main(void){

    // Criando os objetos separados

    MatrizQuadrada M1 = MatrizQuadrada();
    MatrizQuadrada M2 = MatrizQuadrada();
    MatrizQuadrada M3 = MatrizQuadrada();
    MatrizQuadrada I = MatrizQuadrada();
    MatrizQuadrada R = MatrizQuadrada();
    MatrizQuadrada T = MatrizQuadrada(); 


    // Lendo as matrizes M1 e M2

    M1.leMatriz();
    M2.leMatriz();

    // Imprimindo as matrizes para verificar se passaram certas.

    std::cout << "Matriz 1: " << std::endl;
    M1.imprimeMatriz(); 
    std::cout << "Matriz 2: " << std::endl;
    M2.imprimeMatriz();

    //Comparando para ver se são iguais ou diferentes.

    if (R.compara(M1,M2)){
        std::cout << "Matrizes iguais!\n";
    }
    else{
        std::cout << "Matrizes diferentes!\n";
    }
    
    // Criando a matriz identidade e imprimindo para verificação

    I.criaMatrizIdentidade();
    std::cout << "Matriz Identidade: " << std::endl;
    I.imprimeMatriz();

    // Calculando o produto e imprimindo para verificação

    R.produto(M1,I);
    std::cout << "Produto das Matrizes: " << std::endl; 
    R.imprimeMatriz();

    // Calculando a soma de M3 com o Produto e imprimindo para verificação

    M3.soma(M2,R);
    std::cout << "Soma das Matrizes: " << std::endl;
    M3.imprimeMatriz();

    // Criando a transposta e imprimindo para verificação
    T.criaTransposta(R);
    std::cout << "Matriz Transposta: " << std::endl;
    T.imprimeMatriz();
    
    // Finalmente, fim do programa (valgrind aprovou!!)

}
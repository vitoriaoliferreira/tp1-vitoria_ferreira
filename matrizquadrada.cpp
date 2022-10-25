#include <iostream>
#include "matrizquadrada.h"

MatrizQuadrada::MatrizQuadrada(){
    // Pergunta a ordem das matrizes (não para de perguntar até completar de todas as matrizes.)
    std::cout << "Ordem da matriz: " << std::endl;
    std::cin >> ordem;
    matriz=new int*[ordem];
    for(int i=0; i<ordem; i++){
        matriz[i]= new int [ordem];
    }

}

void MatrizQuadrada::leMatriz(){
    std::cout << "Insira os elementos da matriz: ";
    for(int i=0; i<ordem; i++){
        for(int j=0; j< ordem; j++){
            std::cin >> matriz[i][j];
        }
    }
}

void MatrizQuadrada::imprimeMatriz(){
    //laço de repetiçao que imprime a posição ij da matriz m1;
    for(int i=0; i<ordem; i++){
        for(int j=0; j<ordem; j++){
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    
    std::cout << std::endl;}
}

void MatrizQuadrada::soma(MatrizQuadrada &M1, MatrizQuadrada &M2){
    if(M1.ordem == M2.ordem && 
    M1.ordem == ordem && 
    M2.ordem== ordem){
        // loop que acessa a posição ij da matriz m1 e soma com o elemento na posição ij da matriz m2;
        for(int i=0; i< ordem; i++){
            for(int j=0; j< ordem; j++){
                matriz[i][j] = M1.matriz[i][j] + M2.matriz[i][j];
            }
        }
    }
}

void MatrizQuadrada::produto(MatrizQuadrada &M1, MatrizQuadrada &M2){
    int soma;
    if(M1.ordem==M2.ordem && M2.ordem == ordem){
        //inicializando a matriz produto
        for(int i=0; i<ordem; i++){
            for(int j=0; j<ordem; j++){
                matriz[i][j] = 0;
            }
        }
        //calculando o produto
        for(int i=0; i<ordem; i++){
            for(int j=0; j<ordem; j++){
                soma = 0;
                for(int k=0; k<ordem; k++){
                    soma = soma + M1.matriz[i][k]*M2.matriz[k][j];
                }
              matriz[i][j] = soma;
            }
        }
    }
    else{
        std::cout << "Erro! Matrizes de ordens diferentes.";
    }
}

bool MatrizQuadrada::compara(MatrizQuadrada &M1, MatrizQuadrada &M2){
    //retorna falso se as matrizes são diferentes.

    if(M1.ordem!=M2.ordem){
        return false;
    }
    // Se for verdadeiro, o programa entra em loop e armazena em um contador todas as vezes que os valores na posição
    // ij da m1 e m2 são iguais
    int cont = 0;
    int areaMatriz = M1.ordem * M1.ordem;

    for(int i=0; i<M1.ordem; i++){
        for(int j=0; j<M1.ordem; j++){
            if(M1.matriz[i][j]==M2.matriz[i][j]){
                cont++;
            }
        }
    }
    //se o contador for igual a área da matriz as matrizes são iguais.
    if(cont==areaMatriz)
        return true;
    
    else
        return false;
    
}

void MatrizQuadrada::criaTransposta(MatrizQuadrada &M1){
    
    if(M1.ordem==ordem)
    {   
        //laço de repetição que inverte as linhas e as colunas de m1 e armazena em transposta;
        for(int i=0; i<ordem; i++){
            for(int j=0; j<ordem; j++){
                matriz[i][j] = M1.matriz[j][i];
            }
        }
    }
}

void MatrizQuadrada::criaMatrizIdentidade(){
    //quando o laço de repetição passa na posição i=j (diagonal principal) o elemento se torna 1, senao, 0.
    for(int i=0; i< ordem; i++){
        for(int j=0; j< ordem; j++){
            if(i==j){
                matriz[i][j] = 1;
            }
            else{
                matriz[i][j] = 0;
            }
        }
    }
}

// Desconstrutor para deletar os dados armazenados dinamicamente;
MatrizQuadrada::~MatrizQuadrada(){
    for(int i=0; i<ordem; i++){
        delete[] matriz[i];
    }

    delete[] matriz;

}

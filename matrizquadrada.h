struct MatrizQuadrada {
    int _ordem;
    int *tamanho;

    //construtores e desconstrutores

    MatrizQuadrada();
    ~MatrizQuadrada();

}

// funçoes 

void leMatriz(MatrizQuadrada &M1);
void criaMatrizIdentidade(MatrizQuadrada &M1, int n);
void imprimeMatriz(MatrizQuadrada &M1);
void produto(MatrizQuadrada &M1, MatrizQuadrada &M2, MatrizQuadrada &produto);
void soma(MatrizQuadrada &M1, MatrizQuadrada &M2, MatrizQuadrada &soma);
void criaTransposta(MatrizQuadrada &M1, MatrizQuadrada &transposta);
bool compara(MatrizQuadrada &M1, MatrizQuadrada &M2);
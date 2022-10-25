struct MatrizQuadrada
{
    int **matriz;
    int ordem;

    // construtores e desconstrutores

    MatrizQuadrada();
    ~MatrizQuadrada();

    // funçoes


void leMatriz();
void soma(MatrizQuadrada &M1, MatrizQuadrada &M2);
void imprimeMatriz();
void produto(MatrizQuadrada &M1, MatrizQuadrada &M2);
void criaTransposta(MatrizQuadrada &M1);
bool compara(MatrizQuadrada &M1, MatrizQuadrada &M2);
void criaMatrizIdentidade();

};
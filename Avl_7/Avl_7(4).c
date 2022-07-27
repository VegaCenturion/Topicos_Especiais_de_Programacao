#include <stdio.h>
//Operação de soma entre duas matrizes quadradas
int main()
    {
        int matriz_1[2][2];     //vetor de matriz_1
        int matriz_2[2][2];     //vetor de matriz_2
        int matriz_soma[2][2];  //vetor de matriz_soma
        
        for(int i = 0; i < 2; i++){ //for para receber os valors da matriz_1
    
        for(int j = 0; j < 2; j++){
        printf("entre com o valor da matriz_1:\n");
        scanf("%d", &matriz_1[i][j]);
        }
        }
        for(int i = 0; i < 2; i++){
    
        for(int j = 0; j < 2; j++){     //for para receber os valors da matriz_2
        printf("entre com a segunda matriz_2:\n");
        scanf("%d", &matriz_2[i][j]);
        }
        }
        for(int i = 0; i < 2; i++){     //for para somar os valors das matrizes 1 e 2
        for(int j = 0; j < 2; j++){
        matriz_soma[i][j] = matriz_1[i][j] + matriz_2[i][j];
        printf("%d", matriz_soma[i][j]);
        }
        }
        
    return 0;       //termina o programa
}

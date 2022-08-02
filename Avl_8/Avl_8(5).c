#include <stdio.h>
// copia uma matriz em outra usando ponteiro
int main()
{
    int matriz_1[3][3] = {{11,5, 3.1},{2,7,3},{420,69,1337}}; //matriz inicical
    int matriz_2[3][3] = {{2, 4, 911},{9,11,1},{1337,420,69}}; //matriz que sera preencida
    int c = 0;      //incrementador
    int k = 0;      //incrementador
     
    
    for(int c = 0; c < 3; c++){
        int *pf1 = matriz_1[c]; //ponteiro apontando para o primeiro espaço da matrix
        int *pf2 = matriz_2[c]; //ponteiro apontando para o primeiro espaço da matrix
        for(int k = 0; k < 3; k++,pf1++, pf2++){
            
            *pf1 = *pf2; //troca o conteudo das matrizes
            printf("%d ", *pf1); //imprime o que o ponteiro aponta
        }
        printf("\n"); //quebra de linha
    }
    return 0;
}

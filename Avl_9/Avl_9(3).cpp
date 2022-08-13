#include<stdio.h>
#include<stdlib.h>

//Crie um programa que faça multiplicação de número inteiro de uma matriz 3 x 3 , mas a entrada de dados deve ser via teclado.


int main(){
    
    int m;
    int matriz[3][3];   //Vetor de matriz
    int multi[3][3];     //Vetor da matriz multiplicada

        
        for(int i = 0; i < 3; i++){ //for para receber os valor da matriz
            for(int j = 0; j < 3; j++){
                printf("Entre com o valor da matriz:\n");
                scanf("%d", &matriz[i][j]);
            }
        }
        printf("Digite o valor desejado para a multiplicação: \n");
        scanf("%d", &m);                //recebe o valor da multiplicação desejada
        printf("\n");
        for(int i = 0; i < 3; i++){     //For para imprimir o valor da matriz
            for(int j = 0; j < 3; j++){
                multi[i][j] = matriz[i][j] * m;     //faz a multiplicação de cada linha da matriz
                printf("%d\t", multi[i][j]);
            }
            printf("\n");
        }
    return 0;       //Finaliza o Progama
}

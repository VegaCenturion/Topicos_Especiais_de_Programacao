#include<stdio.h>
#include<stdlib.h>

//Faça um programa que leia do teclado uma matriz 3 x 3 e rescreva na ordem inversa.


int main(){
    int matriz[3][3];   //Vetor de matriz
        for(int i = 0; i < 3; i++){ //for para receber os valor da matriz
            for(int j = 0; j < 3; j++){
                printf("Entre com o valor da matriz:\n");
                scanf("%d", &matriz[i][j]);
            }
        }
        printf("\n");
        for(int i = 2; i >= 0; i--){     //For para imprimir o valor da matriz inversa
            for(int j = 2; j >= 0; j--){        //faz a inverão de cada linha da matriz
                printf("%d\t", matriz[i][j]);
            }
            printf("\n");
        }
    return 0;       //Finaliza o Progama
}


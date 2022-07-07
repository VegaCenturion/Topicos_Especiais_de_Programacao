//Programa que calcula medias se os valores forem positivos
#include<stdio.h>
    int main(){
    float w; //define as variaveis a serem usadas
    float media = 0; //define come zero a variavel media
    
    
        printf("Informe os valores para as variaveis: \n");   //Imprimi na tele o que esta entre ""(aspas duplas) 
        for (int i = 0; i < 4; i = i+1){ //incremento dos valores de w
            scanf("%f", &w); //recebe os valores das variaveis pelo teclado
            if(w > 0.0 && w != 0){ // checa se as variaveis são positivas e diferentes de zero
                media += w; // adicionaos valores a variavel media
            } else  { 
               printf("Entre apenas com valores positivos.\n"); // Imprime caso o numero possua valor '-'(negativo) ou é igual ero 
                           
            }  

    }
        media /= 4; //divide a media por 4
        printf("%.1f", media); // imprime a media com uma casa decima de precisão
        return 0; //encerra o programa 
}
        


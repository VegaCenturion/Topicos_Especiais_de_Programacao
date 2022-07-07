#include <stdio.h>
    int main(){
        int posicao = 0;    // variável que define a posição
        int tiros = 5;      // numero de tentativas
        int tiro;           // variável que registra os tiros
        
        printf("escolha uma posição de 1 a 10:\n"); //imprime o que esta entre parenteses
        scanf("%d", &posicao);      //escaneia a posição digitada
            if (posicao > 10 || posicao < 0){       //condição de posição
                printf("Digite um valor entre 1 e 10\n");       //imprime o que esta entre parenteses
            }
        printf("Agora tente acertar a posição \n");     //imprime o que esta entre parenteses
        for(int i = tiros; i >= 0; i--){    //condição para remover tentativas usadas 
            scanf("%d", &tiro);         //recebe qual foi a tentativas
            switch(tiro)    
                {
                    case 1:
                        if(tiro == posicao){        // checa se a tentativa foi igual a posição
                            printf("Você acertou a posição\n");     //imprime o que esta entre parenteses
                            break;      //condição de parada
                        } else {        // condição caso erre a posição
                            printf("Você errou a posição e tem mais%d" ,&tiros); //imprime o que esta entre parenteses
                        }
                }
    }
        
    }

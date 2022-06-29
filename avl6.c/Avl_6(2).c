#include <stdio.h>
    int main(){
        int posicao = 0;
        int tiros = 5;
        int tiro;
        
        printf("escolha uma posição de 1 a 10:\n");
        scanf("%d", &posicao);
            if (posicao > 10 || posicao < 0){
                printf("Digite um valor entre 1 e 10\n");
            }
        printf("Agora tente acertar a \n");
        for(int i = tiros; i >= 0; i--){
            scanf("%d", &tiro);
            switch(tiro)    
                {
                    case 1:
                        if(tiro == posicao){
                            printf("Você acertou a posição\n");
                            break;
                        } else {
                            printf("Você errou a posição e tem mais%d" ,&tiros);
                        }
                }
    }
        
    }
        
    

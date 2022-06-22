// checa se a letra p foi digitada pelo teclado usando de base o programa da avaliação 4 enquanto usa while

#include <stdio.h>
int main()
{
    
    char letras[100]; //define o tamanoho do array de char letras
    printf("Digite algumas letras: \n"); // printa o que se é pedido
    gets(letras); // recebe as letras digitadas 
    int conteudo = 0; // conta as letras 'P'
    int i = 0;
    
    while(letras[i] != '\0') { //incremento do vetor letras
       if(letras[i] == 'P' || letras[i] == 'p'){ // se letras 'P's forem digitadeas aumenta 'conteudo'
           conteudo ++; //incrementador
        }
        i++;
    }
    if(conteudo == 0){ //condição se p foi digitado
        printf("Ainda bem que você não digitou a letra proibida. ");
    } else { //condção se p não foi digitado
        printf("Aqui odiamos a letra P de Palmeiras.");
    }
    return 0; // fim do programa
};





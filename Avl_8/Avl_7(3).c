#include <stdio.h>
//Contar o tramanho da String
int main()
{
    char frase [100];       //vetor de String
    int cont = 0;           //incrementador
    printf("Entre com uma frase:\n");       //imprime na tela
    gets (frase);           //recebe a frase
    
    for (int i = 0; frase[i] !='\0'; i++){      //condição while para contar a quantidade de letras e espaços
        cont ++;        //aumanta o valor do incrementador 
    }
    
    printf("O tamanho da String e:  %d", cont); //inprime uma String junto com o tamanho da frase 
    return 0;       //termina o programa
}

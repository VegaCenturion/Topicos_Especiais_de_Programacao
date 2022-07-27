#include <stdio.h>

//imprime o conteudo de endereços de memorias  
int main()
{
    char A  = 'B' ; //variavel inicial 
    char B  = 'L';   //variavel inicial

    char *pc_1 = &A;       //ponteiro do Caracter A
    char *pc_2 = &B;       //ponteiro de Caracter B
    
    if(&A > &B){        //condção de if
        printf("O maior valor é: %p\n", &A);    //se o endereço de A for maior que B isso será imprimido
    } else {
        printf("O maior valor é: %p\n", &B);    //se o endereço de B for maior que A isso será imprimido
    }
    
    return 0;   //finaliza o rpograma
}

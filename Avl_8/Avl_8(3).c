#include <stdio.h>

//imprime o conteudo de endereços de memorias  
int main()
{
    int A  = 15; //variavel inicial 
    int B  = 11;   //variavel inicial
    int a  = 0;
    int b  = 0;
    
    int *pi_A = &A;       //ponteiro de Inteiro A
    int *pi_B = &B;       //ponteiro de Inteiro B
    
        printf("A = %d | B = %d\n", *pi_A, *pi_B); //imprime o valor dos ponteiros A e B antes da troca
        
        a = *pi_A;      //define a variavel a com o valor de A
        b = *pi_B;      //define a variavel b com o valor de B
        *pi_B = a;      //troca o valor do ponteiro pi_B com o valor de a
        *pi_A = b;      //troca o valor do ponteiro pi_A com o valor de b
        
        printf("A = %d | B = %d\n", *pi_A, *pi_B); //imprime o valor dos ponteiro A e b após a troca
        
    return 0;   //finaliza o rpograma
}
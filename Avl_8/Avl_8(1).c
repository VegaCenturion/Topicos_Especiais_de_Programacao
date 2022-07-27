#include <stdio.h>

//imprime o conteudo de endereços de memorias  
int main()
{
    float mat [3][3] {{1, 2, 3},{2, 4, 3},{4, 16, 81}}; //matriz inicial
    float *pf1 = mat;
    for (int A = 0; A < 3 ; A++ ){
    	for (int B = 0; B < 3 ; B++){
    		printf("%p", &B);
	}
	}
        
    return 0;   //finaliza o rpograma
}


#include <stdio.h>

//imprime o conteudo de endereços de memorias  
int main()
{
    float mtz[3][3] = {{1.1, 2.2, 3.1},{2.7, 4.4, 3},{4.12, 16.3, 81.69}}; //matriz inicial
    float *pf1 = mtz;       //ponteiro da matriz
    
    for (int A = 0; A < 3 ; A++ ){      //condição for de aumento da coluna vertical
    	for (int B = 0; B < 3 ; B++){   //condição for de aumento da coluna horizontal
    		printf("%p\n Endereços da matriz", &mtz[A][B]); //imprime o endereço dos ponteiros da matriz
    		*pf1++;
	}
	}
        
    return 0;   //finaliza o rpograma
}

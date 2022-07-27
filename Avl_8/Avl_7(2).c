#include <stdio.h>
    // Compara se duas String possuem o mesmo tamanho
int main()
{
    char str1 [1000];
    char str2 [1000];
    
    int a = 0;      // variável de incremento 
    int b = 0;      // variável de incremento
    
    printf("\nEsntre com a primeira String:");      // Imprime no console
    gets(str1);                                     // Escaneia do console
    printf("\nEntre com a segunda String:");        // Imprime no console
    gets(str2);                                     // Escaneia do console
    
    while (str1[a] != '\0') {       // Estrutura while para para aumentar a variável str1
        str1[a];
        a++;
    }
    while (str2[b] != '\0') {       // Estrutura while para aumentar a variável str2 
        str2[b];
        b++;
    }
    
     if (a == b) {   
        printf("\nEssas String são iguais! ");      // Condição caso os valores de a e b sejam iguas
    } else {
        printf("\nEssas String não são iguais! ");  // Condição caso os valores de a e b sejam diferentes
    }
    
    return 0;
}


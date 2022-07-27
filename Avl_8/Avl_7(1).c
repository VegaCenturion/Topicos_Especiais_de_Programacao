#include <stdio.h>
	// Somador de Strings

int main()
{
  
    char str1[100];     // Primeiro vetor de String
    char str2[100];     // Segundo vetor de String
    char str3[100];     // Vetor para a String concatenada
  
    int a = 0;      // variável de incremento 
    int b = 0;      //variável de incremento
  
    printf("\nEsntre com a primeira String:");      // Imprime no console
    scanf("%s", &str1);                             // Escaneia do console
    printf("\nEntre com a segunda String:");        // Imprime no console
    scanf("%s", &str2);                             // Escaneia do console
  
    while (str1[a] != '\0') {       // Estrutura while para inserir a str1 na str3
        str3[b] = str1[a];
        a++;
        b++;
    }
  
    i = 0;
    while (str2[a] != '\0') {       // Estrutura while para inserir a str2 na str3
        str3[b] = str2[a];
        a++;
        b++;
    }
        str3[b] = '\0';     //  terminador nulo '\0'
  
    
    printf("\nString concatenada: %s", str3);       // Imprime a str3 no console
    
    return 0;
}

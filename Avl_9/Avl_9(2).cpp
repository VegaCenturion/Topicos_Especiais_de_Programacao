#include <stdio.h>
#include <stdlib.h>
//Programa que conta quantas vezes e em quais posições uma determinada letra aparece

void vetor(char* string, int* pos, int* nLetras, char letra) {
//função que percorre a string e achar a quantas letras aquela string possui
    for(int i = 0; i < 100; i++) {
        if(string[i] == letra) {
            pos[*nLetras] = i;
            (*nLetras)++;
        }

        if(string[i] == '\n') {
            break;
        }
    }
}

int main() {
//função principal
    char frase[100], letra;
    int pos[100], qnt = 0;

    printf("Digite uma frase: "); 	//recebe a frase de até 100 caracteres
    for(int i = 0; i < 100; i++) {//função para per
        scanf("%c", &frase[i]);

        if(frase[i] == '\n') {		//delimita a frase
            break;
        }
    }

    printf("Digite uma letra: ");	
    scanf("%c", &letra);	//recebe a letra a ser encontrada

    vetor(frase, pos, &qnt, letra); 	//contem a frase, posicoes das letras escolhidas, quantidade e a letra escolhida

    printf("Total de letras encontradas na frase: %d\n", qnt);		//imprime a quantidade de letras encontradas
    printf("Posicao de cada letra na frase: ");	
    for(int i = 0 ; i < qnt; i++) {	//função para imprimir a posição das letras
        printf("%d ", pos[i]);
    }
    printf("\n");
}

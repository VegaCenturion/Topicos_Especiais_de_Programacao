#include<stdio.h>

/*Escreva um programa que leia do teclado 3 notas de um aluno e a média das notas dos exercícios realizados por ele. 
Calcular a média de aproveitamento, usando a fórmula: MA = (N1 + N2*2 + N3*3 + ME)/7. Onde ME é a média dos exercícios.
A partir da média, informar o conceito de acordo com a tabela:
maior ou igual a 9 - Conceito A
maior ou igual a 7.5 e menor que 9 - Conceito B
maior ou igual a 6 e menor que 7.5 - Conceito  C
maior ou igual a 4 e menor que 6 - Conceito  D
menor que 4 - Conceito  E*/


int main(){

   float N1, N2, N3, Me, Ma; //variaveis que receberao as notas

    printf("Digite a primeira nota: ");
        scanf("%f", &N1);       //recebe a nota
    printf("Digite a segunda nota: ");
       scanf("%f", &N2);        //recebe a nota
    printf("Digite a terceira nota: ");
        scanf("%f", &N3);       //recebe a nota
    printf("Digite a média dos exercicios: ");
        scanf("%f", &Me);       //recebe a nota

    Ma = (N1 + N2*2 + N3*3 + Me)/7.0; //formula para calcular a media
    
    if(Ma>=9){          //condicoes de If Else if e Else para checar qual conceito o aluno recebera
        printf("\n\nA o conceito do aluno foi: A");
    }else if(Ma>=7.5){
        printf("\n\nA o conceito do aluno foi: B");
    }else if(Ma>=6){
        printf("\n\nA o conceito do aluno foi: C");
    }else if(Ma>=4){
        printf("\n\nA o conceito do aluno foi: D");
    } else{    
        printf("\n\nA o conceito do aluno foi: E");
    }
   
   return 0;
}


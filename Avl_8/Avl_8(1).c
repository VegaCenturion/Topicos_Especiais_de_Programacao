#include <stdio.h>
#include <stdbool.h>

//imprime o conteudo dos ponteiros antes e depois das modificaC'C5es
int
main ()
{
  int num = 747;		//variC!vel inicial
  float dec = 222.666		// variC!vel inicial
    char A = 'X';		//variC!vel inicial
  bool B = false;		//variC!vel inicial

  int *pn = &num;		//ponteiro de Inteiro
  float *pf = &dec;		//ponteiro de Decimal
  char *pc = &A;		//ponteiro de Caracter
  bool *pb = &B;		//ponteiro de Booleano

  printf ("Inteiro: %d\n", num);	//imprime o conteudo do ponteiro de Inteiro antes da troca
  printf ("Decimal: %f\n", dec);	//imprime o conteudo do ponteiro de Decimal antes da troca
  printf ("Caracter: %c\n", A);	//imprime o conteudo do ponteiro de Caracter antes da troca
  printf ("Booleano: %d\n", B);	//imprime o conteudo do ponteiro de Booleano antes da troca

  *pn = 777;			//ponteiro de Inteiro apC3s a troca
  *pf = 0.0000133742069;	//ponteiro de Decimal apC3s a troca
  *pc = 'V';			//ponteiro de Caracter apC3s a troca
  *pb = true;			//ponteiro de Booleano apC3s a troca

  printf ("Inteiro: %d\n", num);	//imprime o ponteiro de Inteiro apC3s a troca
  printf ("Decimal: %f\n", dec);	//imprime o ponteiro de Decimal apC3s troca
  printf ("Caracter: %c\n", A);	//imprime o ponteiro de Caracter apC3s a troca
  printf ("Booleano: %d\n", B);	//imprime o ponteiro de Booleano apC3s a troca


  return 0;			//finaliza o rpograma
}


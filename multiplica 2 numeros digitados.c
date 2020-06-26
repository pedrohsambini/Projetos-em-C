 /*
	Name: Multiplicador 1.0
	Copyright: ***No Copyright***
	Author: Pedro Henrique Sambini da Silva
	Date: 25/06/20 23:04
	Description: Esse programa vai somar 2 numeros digitados
	e exibir o resultado.
*/
#include <stdio.h>
#include <stdlib.h>

 int main(void)


 
 {
 	printf("__________________________________________________\n");
 	printf("Esse Programa Vai Multiplicar 2 Numeros Digitados.\n");
 	printf("__________________________________________________\n");
    int x;
    int y;
    
    printf("Digite o Primeiro  Numero:\n");
    scanf( "%d", &x );
    
    printf("Digite o Segundo Numero:\n");
    scanf("%d", &y);
    
    {
    	
     printf("Resultado: %d\n", y*x );
     
    }
    printf("______________________________________________\n");
    
system("pause");
return 0;
 }


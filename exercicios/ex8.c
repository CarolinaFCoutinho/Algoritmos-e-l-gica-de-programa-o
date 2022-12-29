#include <stdio.h>

/*Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9
de um número qualquer digitado pelo usuário.*/

int main(){
	int n;
	printf("Digite um numero para saber a sua tabuada:\n");
	scanf("%d", &n);
	
	printf("1 x n = %d, 2 x n = %d, 3 x n = %d, 4 x n = %d, 5 x n = %d, 6 x n = %d, 7 x n = %d, 8 x n = %d, 9 x n = %d",
			n * 1,		n * 2,		n * 3,		n * 4,		n * 5,		n * 6,		n * 7,		n * 8,		n * 9);
	
}

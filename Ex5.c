#include <stdio.h>
//Carolina de Faria Coutinho
int main (){
	int numero, N[10],i=0;
	printf("Digite um numero menor que 50:\n");
	scanf("%d", &numero);
	N[0] = numero;
	while(i<=10){
		printf("N[%d] = %d\n", i, N[i]);
		i++;
		N[i] = numero + numero;
		numero = N[i];
	}
	return 0;
}

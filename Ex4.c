#include <stdio.h>
//Carolina de Faria Coutinho
int main (){
	int a,b,c,maior;
	printf("Escreva tres valores:\n");
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	maior = (a+b+abs(a-b))/2;
	if(c > maior)
		printf("%d eh o maior\n", c);	
	else
		printf("%d eh o maior\n", maior);
	return 0;
}

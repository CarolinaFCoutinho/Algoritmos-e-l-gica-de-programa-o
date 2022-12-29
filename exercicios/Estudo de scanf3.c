#include <stdio.h>
//Carolina de Faria Coutinho
int main (){
	char nome[30];
	double salario, vendas, total;
	printf("Escreva o nome do(a) vendedor(a):\n");
	scanf("%s", nome);
	printf("Salario mensal:\n");
	scanf("%lf", &salario);
	printf("Vendas do mes:\n");
	scanf("%lf", &vendas);
	total = salario + (vendas * 0.15);
	printf("Total = %.2lf\n", total);
	return 0;
}

#include <stdio.h>
//Carolina de Faria Coutinho
int main (){
	int numero;
	double salario=0, horas=0;
	printf("Digite o numero do funcionario:\n");
	scanf("%d", &numero);
	printf("Horas trabalhadas mensalmente:\n");
	scanf("%lf", &horas);
	printf("Pagamento por hora:\n");
	scanf("%lf", &salario);
	salario = salario * horas;
	printf("Numero = %d\n", numero);
	printf("Salario = %.2lf\n", salario);
}

#include <stdio.h>
#include <locale.h>
//Carolina de Faria Coutinho
int main (){
	setlocale(LC_ALL,"");
	double n = 3.14159;
	double A, R=0;
	printf(" A = n.R²\n n = 3.14159\n");
	printf("Digite o valor de R:\n");
	scanf("%lf", &R);
	A = n * (R*R);
	printf("A = %.4lf\n",A);
}

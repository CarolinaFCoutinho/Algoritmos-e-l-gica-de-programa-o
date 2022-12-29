#include <stdio.h>

int main (){
	
	int fahrenheit;
	float c;
	
	printf("Digite o valor em Fahrenheit \n");
	scanf("%d", &fahrenheit);
	c=(fahrenheit-32)*(5.0/9.0); /*ou ((float)5/9)*/
	printf("O valor em Celsius e: %f", c);
}

/*12.Faça um programa que resolva a seguinte pergunta:
a. Sabendo que os números da sequência (1, x, 7, y) estão em
progressão aritmética, quanto vale a soma x + y?*/

#include <stdio.h>

int main (){
	double ax , ay, a1 = 1, n = 3, r, t;
	
	printf ("Progressao aritmetica de sequencia (1, x, 7, y)\n");
	/*an = a1 + (n - 1) * r;*/
	
	r =  a1 + (n - 1);
	
	printf ("valor da razao:%g \n", r);
	
	n = 2;
	
	ax = a1 + (n - 1) * r;
	
	printf ("x: %g \n", ax );
	
	n = 4;
	
	ay = a1 + (n - 1) * r;
	
	printf ("y: %g \n", ay);
	
	t = ay + ax;
	
	printf("x + y = %g",t );
}

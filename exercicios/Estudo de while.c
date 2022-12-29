#include <stdio.h>
//Carolina de Faria Coutinho
int main(){
	int N[20],i=0,j=19,temp;
	printf("Digite 20 numeros:\n");
	while(i<20){
		scanf("%d", &N[i]);
		i++;
	}
	i=0;
	while(i<20){
		if(i < 10){
			temp = N[i];
			N[i] = N[j];
			N[j] = temp;
		}
		printf("N[%d] = %d\n",i, N[i]);
		i++;
		j--;
	}
	return 0;
}


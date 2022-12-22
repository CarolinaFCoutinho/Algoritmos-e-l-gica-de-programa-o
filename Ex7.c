#include <stdio.h>
//Carolina de Faria Coutinho
int main (){
	int matriz[12][12], coluna,i,j,soma;
	char operacao;
	for(i = 0; i < 12; i++){
		for(j = 0; j < 12; j++){
			matriz[i][j] = rand()%10;
			printf("%d ", matriz[i][j]);
		}
		printf("\n");
	}
	printf("Qual coluna da matriz voce quer operar?\n");
	scanf("%d", &coluna);
	printf("Digite 'S', para somar ou 'M' para calcular a media\n");
	scanf("%s", &operacao);
	fflush(stdin);
	for(i = 0; i < 12; i++){
		for(j = 0; j<12; j++){
			if(j==5){
				soma += matriz[i][j];
			}
		}
	}
	if(operacao == 'S'){
		printf("Soma dos numeros da coluna: %d\n", soma);
	}else{
		soma = soma / 12;
		printf("Media dos numeros da coluna: %d\n", soma);
	}
	return 0;
}

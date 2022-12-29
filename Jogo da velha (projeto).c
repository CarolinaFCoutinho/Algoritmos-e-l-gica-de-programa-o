#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main (){
	setlocale(LC_ALL,"");
	int jogo = 1, i, j, resultado, posicao = 0, linha = 0, coluna = 0, vencedor1 = 0, vencedor2 = 0, velha = 0;
	char jogador1[20], jogador2[20]; 
	
	while(jogo == 1){
	velha = 0;
	int matriz[3][3] = 
	  {1,2,3,
		4,5,6,
		7,8,9};
	
	printf("============================================================\n                       JOGO DA VELHA\n============================================================\n\n");
	printf("Digite o nome do jogador 1:\n");
	scanf("%s", jogador1);
	fflush(stdin);
	printf("Digite o nome do jogador 2:\n");
	scanf("%s", jogador2);
	fflush(stdin);
	system("clear");
	resultado = 1;
	while(resultado != 0){
		printf("============================================================\n                       JOGO DA VELHA\n============================================================\n\n");
		
		posicao = 0;
		for(i = 0; i < 3; i++){
			printf("     ");
			for(j = 0; j < 3; j++){
				if(matriz[i][j] < 10){
				printf("      ");
				}else if(matriz[i][j] == 11){
				printf("   X  ");
				}else if(matriz[i][j] == 22){
				printf("   O  ");
				}
				if(j<2){printf("|");}	
			}
			printf("      [%d]    [%d]    [%d]\n", posicao+1, posicao+2, posicao+3);
			posicao = posicao + 3;	
			if(i<2){printf("     ------|------|------");}
			printf("\n");
		}
		
		while(resultado == 1 || resultado == 2){
			if(resultado == 1){
				printf("\n%s em que numero você quer colocar o [X]?\n", jogador1);
				scanf("%d", &posicao);
			}
			else if (resultado == 2){
				printf("\n%s em que numero você quer colocar o [O]?\n", jogador2);
				scanf("%d", &posicao);
			}
			
			for(i = 0; i < 3; i++){
			    for(j = 0; j < 3; j++){
			      if(posicao == matriz[i][j]){
				  	linha = i;
				  	coluna = j;
			      }
			    }
			}
			
			if(matriz[linha][coluna] == 11 || matriz[linha][coluna] == 22){
				printf("\n\nEspaço preenchido, tente novamente.\n\n");
					if(resultado == 1){
					resultado = 1;
					}else if(resultado == 2){
					resultado = 2;
					}
			}else if(resultado == 1){	
			for(i = 0; i < 3; i++){
			    for(j = 0; j < 3; j++){
			      if(posicao == matriz[i][j]){
				  	matriz[i][j] = 11;
			      }
			    }	
			}
			resultado = 3;	
			}else if(resultado == 2){
			for(i = 0; i < 3; i++){
			    for(j = 0; j < 3; j++){
			      if(posicao == matriz[i][j]){
				  		matriz[i][j] = 22;
				  	}
			      }
			    }
				resultado = 4;
			}
		}
			
		vencedor1 = 0;
		vencedor2 = 0;
		
		for(i = 0; i < 3; i++){
		    for(j = 0; j < 3; j++){
		      if(matriz[i][j] == 11){
		        vencedor1++;
		      }
		      if(matriz[i][j] == 22){
		        vencedor2++;
		      }
		    }
		    if(vencedor1 == 3){
			        vencedor1 = 3;
			      }
			      else{
					vencedor1 = 0;
				  }
			if(vencedor2 == 3){
			        vencedor2 = 3;
			      }
			      else{
					vencedor2 = 0;
				  }
		}
		    if(vencedor1 == 3){
		        resultado = 0;
		        break;
		      }
		    else if(vencedor2 == 3){
		        resultado = 0;
		        break;
		      }
		      
		vencedor1 = 0;
		vencedor2 = 0;
		  for(j = 0; j < 3; j++){
		    for(i = 0; i < 3; i++){
		      if(matriz[i][j] == 11){
		        vencedor1++;
		      }
		      if(matriz[i][j] == 22){
		        vencedor2++;
		      }
		    }
		    
		    if(vencedor1 == 3){
			        vencedor1 = 3;
			      }
			      else{
					vencedor1 = 0;
				  }
			if(vencedor2 == 3){
			        vencedor2 = 3;
			      }
			      else{
					vencedor2 = 0;
				  }
		    
		}
		    if(vencedor1 == 3){
		        resultado = 0;
		        break;
		      }
		    else if(vencedor2 == 3){
		        resultado = 0;
		        break;
		      }
		  
		  
		vencedor1 = 0;
		vencedor2 = 0;  
		for(i = 0; i < 3; i++){
		    for(j = 0; j < 3; j++){
		    	if(i == j){
			      if(matriz[i][j] == 11){
			        vencedor1++;
			      }
			      if(matriz[i][j] == 22){
			        vencedor2++;
			      }
				}
			}	
		}
		
		if(vencedor1 == 3){
		    resultado = 0;
		    break;
		}
		else if(vencedor2 == 3){
		    resultado = 0;
		    break;
		}
		
		vencedor1 = 0;
		vencedor2 = 0;  
		for(i = 0; i < 3; i++){
		    for(j = 0; j < 3; j++){
		    	if(j == 0 && i == 2){
			      if(matriz[i][j] == 11){
			        vencedor1++;
			      }
			      if(matriz[i][j] == 22){
			        vencedor2++;
			      }
				}
				if(j == 1 && i == 1){
			      if(matriz[i][j] == 11){
			        vencedor1++;
			      }
			      if(matriz[i][j] == 22){
			        vencedor2++;
			      }
				}
				if(j == 2 && i == 0){
			      if(matriz[i][j] == 11){
			        vencedor1++;
			      }
			      if(matriz[i][j] == 22){
			        vencedor2++;
			      }
				}
			}	
		}
		
		if(vencedor1 == 3){
		    resultado = 0;
		    break;
		}
		else if(vencedor2 == 3){
		    resultado = 0;
		    break;
		}
		
		if(resultado == 3){
		resultado = 2;
		}
		else if(resultado == 4){
		resultado = 1;
		}
		
		vencedor1 = 0;
		vencedor2 = 0; 
		  
		velha++;
		if(velha == 9){
		    resultado = 0;
		    break;
		}
		system("clear");
		
	}
	
	
	if(vencedor1 == 3 && vencedor2 < 3){
		system("clear");
		printf("============================================================\n                       JOGO DA VELHA\n============================================================\n\n");
		posicao = 0;
		for(i = 0; i < 3; i++){
			printf("     ");
			for(j = 0; j < 3; j++){
				if(matriz[i][j] < 10){
				printf("      ");
				}else if(matriz[i][j] == 11){
				printf("   X  ");
				}else if(matriz[i][j] == 22){
				printf("   O  ");
				}
				if(j<2){printf("|");}	
			}
			printf("      [%d]    [%d]    [%d]\n", posicao+1, posicao+2, posicao+3);
			posicao = posicao + 3;	
			if(i<2){printf("     ------|------|------");}
			printf("\n");
		}
		printf("\n\n%s é o VENCEDOR !!!", jogador1);
	}
	else if(vencedor2 == 3 && vencedor1 < 3){
		system("clear");
		printf("============================================================\n                       JOGO DA VELHA\n============================================================\n\n");
		posicao = 0;
		for(i = 0; i < 3; i++){
			printf("     ");
			for(j = 0; j < 3; j++){
				if(matriz[i][j] < 10){
				printf("      ");
				}else if(matriz[i][j] == 11){
				printf("   X  ");
				}else if(matriz[i][j] == 22){
				printf("   O  ");
				}
				if(j<2){printf("|");}	
			}
			printf("      [%d]    [%d]    [%d]\n", posicao+1, posicao+2, posicao+3);
			posicao = posicao + 3;	
			if(i<2){printf("     ------|------|------");}
			printf("\n");
		}
		printf("\n\n%s é o VENCEDOR !!!", jogador2);
	}
	else if(velha == 9){
		system("clear");
		printf("============================================================\n                       JOGO DA VELHA\n============================================================\n\n");
		posicao = 0;
		for(i = 0; i < 3; i++){
			printf("     ");
			for(j = 0; j < 3; j++){
				if(matriz[i][j] < 10){
				printf("      ");
				}else if(matriz[i][j] == 11){
				printf("   X  ");
				}else if(matriz[i][j] == 22){
				printf("   O  ");
				}
				if(j<2){printf("|");}	
			}
			printf("      [%d]    [%d]    [%d]\n", posicao+1, posicao+2, posicao+3);
			posicao = posicao + 3;	
			if(i<2){printf("     ------|------|------");}
			printf("\n");
		}
		printf("\n\nEmpate!!");
	}
	printf("\n\nJogar novamente? [1] - SIM [2] - NÃO.\n");
	scanf("%d", &jogo);
	system("clear");
	if(jogo == 2){
		return 0;
	}
	}
}

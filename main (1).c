#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <time.h>
//Carolina de Faria Coutinho 

void desenhoforca(int n){
	switch (n) {
	
	case 7 :
		printf("  _______\n  ");
		printf("  |    | \n  ");
		printf("  |\n  ");
		printf("  |\n  ");
		printf("  |\n  ");
		printf("  |\n  ");
		printf("__|_________\n\n  ");
	break;

	case 6 :
		printf("  _______\n  ");
		printf("  |    | \n  ");
		printf("  |    O \n  ");
		printf("  |\n  ");
		printf("  |\n  ");
		printf("  |\n  ");
		printf("__|_________\n\n  ");
	break;

	case 5 :
		printf("  _______\n  ");
		printf("  |    | \n  ");
		printf("  |    O \n  ");
		printf("  |    |\n  ");
		printf("  |    |\n  ");
		printf("  |\n  ");
		printf("__|_________\n\n  ");
	break;

	case 4 :
		printf("  _______\n  ");
		printf("  |    | \n  ");
		printf("  |    O \n  ");
		printf("  |   /|\n  ");
		printf("  |    | \n  ");
		printf("  |   \n  ");
		printf("__|_________\n\n  ");
	break;

	case 3 :
		printf("  _______\n  ");
		printf("  |    | \n  ");
		printf("  |    O \n  ");
		printf("  |   /|\\\n  ");
		printf("  |    | \n  ");
		printf("  |   \n  ");
		printf("__|_________\n\n  ");
	break;

	case 2 :
		printf("  _______\n  ");
		printf("  |    | \n  ");
		printf("  |    O \n  ");
		printf("  |   /|\\\n  ");
		printf("  |    | \n  ");
		printf("  |   /  \n  ");
		printf("__|_________\n\n  ");
	break;

	case 1 :
		printf("  _______\n  ");
		printf("  |    | \n  ");
		printf("  |    O \n  ");
		printf("  |   /|\\\n  ");
		printf("  |    | \n  ");
		printf("  |   / \\\n  ");
		printf("__|_________\n\n  ");
	break;
	
	case 0 :
		printf("  _______\n  ");
		printf("  |    | \n  ");
		printf("  |    X \n  ");
		printf("  |   /|\\\n  ");
		printf("  |    | \n  ");
		printf("  |   / \\\n  ");
		printf("__|_________\n\n  ");
	break;
 }
}

void forca1(int final,int computador,char palavrapasse[],char jogador1[],char jogador2[]){
  int tamanho, char1, resultadofinal = 2, erroslimite = 7, i=0, j, p=0,q=1;
  char letra = '-';
  char palavraprint[30], erros[6],letrasusadas[15];
  	
  	//limitando o tamanho caso o jogador esteja jogando contra o computador nas dificuldades fácil, médio ou difícil.
  	if(jogador2[0] == '1'){
  		tamanho = 4;
	}
	else if (jogador2[1] == '2'){
		tamanho = 6;
	}
	else if (jogador2[2] == '3'){
		tamanho = 8;
	}
	else{
		tamanho = strlen(palavrapasse);	
	}
	
  	// O for abaixo serve para transformar uma palavra de letras minúsculas em uma palavra de letras maiúsculas.
	// E acrescentar um espaço no lugar que não tiver uma letra.
  	for(i=0; i < tamanho; i++){
			if((int)palavrapasse[i] > 96 && (int)palavrapasse[i] < 123){
				palavrapasse[i] = (int)palavrapasse[i] - 32;
			}
			else if((int)palavrapasse[i] < 65 || (int)palavrapasse[i] > 122){
				palavrapasse[i] = ' ';
			}
	}
	
	//O resultadofinal vai determinar a mensagem final caso o jogador perder ou ganhar. 
  while(resultadofinal != 0 || resultadofinal != -1){
  	
  	//A variável computador serve para mudar o que vai ser printado se o computador estiver tentando adivinhar a palavra.
  	if(computador == 1){
      printf("============================================================\n                       JOGO DA FORCA\n============================================================\n\n\n");
   }
   
   //O vetor palavraprint muda cada vez que o jogador acertar a uma letra.
  for(i = 0; i < tamanho; i++){
      if(palavraprint[i] == palavrapasse[i]){
        palavraprint[i] = palavrapasse[i];
      }
      else if(palavrapasse[i] == letra){
        palavraprint[i] = letra;
      }
      else if(palavrapasse[i] == ' '){
      	palavraprint[i] = palavrapasse[i];
	  }
      else{
        palavraprint[i] = '_';
      }
    }
	
	//O desenho da forca muda de acordo com a quantidade de erros do jogador.
    printf("  ");
    desenhoforca(erroslimite);
	
	//Este for conta a quantidade de letras que já foram acertadas.
    j = 0;
    printf(" ");
    for(i = 0; i < tamanho; i++){
      printf("%c ",palavraprint[i]);
      if(palavraprint[i] == palavrapasse[i]){
        j++;
      }
    }//Se j for do mesmo tamanho que a palavrapasse o jogador ganha o jogo.
    if(j == tamanho){
      resultadofinal = 0;
      break;
    }
    
    //Contador de erros.
    printf("\n\n\n  Erros: ");
    j = 0;
    for(i=0; i < tamanho; i++){
      if(palavrapasse[i] == letra){
        j++;
      }
    }
    if(j == 0){
      erroslimite--;
      erros[p] = letra;
      p++;//Contador de erros
    }
    i = 1;
    while(i <= p){
      printf("%c ", erros[i]);
      i++;
    }
	//O jogador perde se erroslimite chegar a 0.
    if(erroslimite == 0){
      resultadofinal = -1;
      break;
    }
    printf("\n\n  (Você tem %d tentativas)\n", erroslimite);
    
    //computador == 2 para o computador adivinhar uma letra.
	if(computador == 2){
		printf("\n\n  Letra aleatória:\n");
	}
	//Este while vai se repetir caso a letra tenha sido usada anteriormente.
	j = 0;
	while(j == 0){	
		if(computador == 2){//letra aleatória.
			srand(time(0));
			char1 = rand()%26 + 65;
		    letra = (char)char1;
		}
		else{
			printf("\n\n  Digite uma letra:\n");
		    scanf("%c", &letra);
			fflush(stdin);
	
    	if((int)letra > 96 && (int)letra < 123){//Transformador de letra minúscula para letra maiúscula.
    		letra = (int)letra - 32;
		}
	}
	
	for(i=1; i <= q; i++){//Verificando se a letra já foi usada.
		if(letrasusadas[i] == letra){
			j = q;
			}
		}
	if(j == q){
		if(computador == 1){
		printf("  Letra usada. tente novamente\n");
		j = 0;
		}
		if(computador == 2){
		j = 0;
		}
	}else if(j == 0){
		j = 1;
		}
	}
	
	if(computador == 2){
	printf("%c\n",letra);
	}
	
	letrasusadas[q] = letra;
	q++;//contador de letras usadas.
	
	if(computador == 1){
    system("cls");
    
	}else if(computador == 2){
	printf("\n============================================================\n");
	}
	
  }
  //Temos 6 finais diferentes.
  if(computador == 1){

	  if(resultadofinal == 0){
		  	if(final == 1){// final jogador vs jogador.
		  	system("cls");
		  	printf("============================================================\n                       JOGO DA FORCA\n============================================================\n\n\n");
		  	printf("  ");
			desenhoforca(erroslimite);
		    printf("\n%s É O(A) VENCEDOR(A)!!\n\n\n A palavra era %s.", jogador2 ,palavrapasse);
			}else if (final == 2){// final jogador vs computador.
				system("cls");
			  	printf("============================================================\n                       JOGO DA FORCA\n============================================================\n\n\n");
			  	printf("  ");
				desenhoforca(erroslimite);
			    printf("\n  VOCÊ GANHOU!!\n\n\n A palavra era %0.8s.",palavraprint);
			}
			
	  }else if(resultadofinal == -1){
		  	if(final == 1){
		  	system("cls");
		  	printf("============================================================\n                       JOGO DA FORCA\n============================================================\n\n\n");
		    printf("  ");
			desenhoforca(erroslimite);
			printf("\n  VOCÊ PERDEU!!\n\n\n A palavra era %s. \n\n %s É O(A) VENCEDOR(A)!!\n",palavrapasse, jogador1);
		  }else if (final == 2){
	  		system("cls");
		  	printf("============================================================\n                       JOGO DA FORCA\n============================================================\n\n\n");
		    printf("  ");
			desenhoforca(erroslimite);
			printf("\n  VOCÊ PERDEU!!\n\n", palavrapasse);
			  }
			}
				
	}
	else if(computador == 2){//Finais caso computador tenha adivinhado ou não a sua palavra.
		
		if(resultadofinal == 0){
		printf("\n============================================================\n");
		printf("\n\n  ");
		desenhoforca(erroslimite);
		printf("VOCÊ PERDEU. \n\n\n A palavra era %s. \n\n Computador adivinhou sua palavra.");
			}
		else{
		printf("\n============================================================\n");
		printf("\n\n  ");
		desenhoforca(erroslimite);
		printf("VOCÊ GANHOU!!.\n\n\n A palavra era %s. \n\n Computador não adivinhou sua palavra.",palavrapasse);
			}	
		}
		
	}

void forca2(char jogador1[], int modo){
	int computador, dificuldade = 0, final = 2,i = 0, j = 0;
  	char 
	palavrapassefacil[5][4] = { "AMOR", "GATO",
								"VASO", "LUVA", "JOGO" }, 
	palavrapassemedio[5][6] = { "ALFACE", "ESPOSA",
								"JARDIM", "QUENTE", "FRANGO" },
	palavrapassedificil[5][8] = { "NATUREZA", "CONTROLE",
								"APRENDER", "PROGRAMA", "ELEGANTE" },
	palavrapasse[30], tamanho[4] = {"000"};
  	
  	srand(time(0));
    j = rand()%5;
    
    //modo == 1 computador escolhe a palavra.
    if(modo == 1){
    	printf("\n  Digite o número da dificuldade de preferência: \n\n [1] - Fácil (4 letras).\n [2] - Médio (6 letras).\n [3] - Difícil (8 letras).\n");
		scanf("%d", &dificuldade);
		fflush(stdin);
		
    	//passando a palavra da matriz para um vetor.
  		if(dificuldade == 1){
	  		for(i = 0; i < 4; i++){
			palavrapasse[i] = palavrapassefacil[j][i];
		 	}
		 	tamanho[0] = '1';
	  	}
		else if(dificuldade == 2){
  			for(i = 0; i < 6; i++){
			palavrapasse[i] = palavrapassemedio[j][i];
		 	}
		 	tamanho[1] = '2';
	  	}
		else if(dificuldade == 3){
			for(i = 0; i < 8; i++){
			palavrapasse[i] = palavrapassedificil[j][i];
		 	}
		 	tamanho[2] = '3';
		}
	}else if(modo == 2){//modo == 2 jogador escolhe a palavra.
		printf("Digite a palavra para o computador descobrir:\n");
		scanf("%s", palavrapasse);
		fflush(stdin);
	}
	
	while(modo == 1){//Jogador vs computador
		computador = 1;
		system("cls");
		forca1(final,computador,palavrapasse,jogador1,tamanho);
		modo = 0;
	}
	while(modo == 2){//Computador tenta adivinhar a palavra.
		computador = 2;
		system("cls");
		forca1(final,computador,palavrapasse,jogador1,tamanho);
		modo = 0;
	}
}

int main () {
	setlocale(LC_ALL,"");	
  char jogador1[20], jogador2[20], palavra[30];
  int final=1, opcao = 1,computador, modo;

  while(opcao == 1){
  	
  printf("============================================================\n                       JOGO DA FORCA\n============================================================\n\n");
  printf("  Digite o número da modalidade de preferência. \n\n [1] - Jogador vs Jogador.\n [2] - Jogador vs Computador.\n\n");
  scanf("%d", &opcao);
  
  if(opcao > 2 || opcao < 1){
    opcao = 1;
    printf("\n  Digite uma opção válida.\n\n");
    continue;
    }
    else if(opcao == 1){
      opcao = 3;
    }
    else{
      opcao = 4;
    }
  
  if(opcao == 3){// Jogador vs Jogador.
  
  printf("\n  Digite o nome do jogador 1:  \n");
  scanf("%s", jogador1);
  printf("\n  Digite o nome do jogador 2:  \n");
  scanf("%s", jogador2);

  printf("\n  %s escreva a palavra para %s descobrir:\n", jogador1, jogador2);
    scanf("%s", palavra);
    fflush(stdin);
    system("cls");
    computador = 1;
    forca1(computador, final, palavra, jogador1, jogador2);
  }
  
  if(opcao == 4){// Jogador vs Computador
  
	printf("\n  Digite o nome do jogador 1:  \n");
	scanf("%s", jogador1);
	
	printf("\n  Digite [1] para o computador escolher a palavra.\n  Digite [2] para escolher uma palavra contra o computador.\n");
	scanf("%d", &modo);
	forca2(jogador1, modo);
  }
  
    printf("\n\n  Jogar novamente? [1] - SIM , [2] - NÃO.\n");
    scanf("%d", &opcao);
    if(opcao == 1){
      system("cls");
      continue;
    }else if(opcao == 2){
      return 0;
    	}
	}
  return 0;
}
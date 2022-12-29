#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int vetor[10], aux;
  printf("Vetor de numeros aleatórios:\n");
  for(int i=0; i < 10;i++){
    vetor[i] = rand()%100;
    printf("%d, ",vetor[i]);
    
  }
  for(int i=0; i < 10; i++){// Bubble sort
    for(int i=0; i < 10; i++){
    if(vetor[i] > vetor[i+1]){
      aux = vetor[i];
      vetor[i] = vetor[i+1];
      vetor[i+1] = aux;
      }
    }
  }
  printf("\nVetor ordenado:\n");
  for(int i=1; i < 11;i++){
    printf("%d, ", vetor[i]);
  }
}
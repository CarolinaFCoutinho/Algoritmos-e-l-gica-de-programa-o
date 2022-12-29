#include <stdio.h>
//Carolina de Faria Coutinho
int main() {
double maior=0, media=0, maior_media=0, menor_media=11;
int aluno1,aluno2,aluno3;

struct alunos{
  int num_matricula;
  char nome[50];
  double nota1,nota2,nota3;
};

struct alunos dados_alunos;
for(int i=0;i<5;i++){
  printf("Digite o numero da matricula do %dº aluno:\n", i+1);
  scanf("%d", &dados_alunos.num_matricula);
  fflush(stdin); 
  printf("Digite o nome do aluno:\n");
  scanf("%s", dados_alunos.nome);
  printf("Digite as 3 notas do %dº aluno:\n",i+1);
  scanf("%lf", &dados_alunos.nota1);
  scanf("%lf", &dados_alunos.nota2);
  scanf("%lf", &dados_alunos.nota3);

  if(dados_alunos.nota1 > maior){
    maior = dados_alunos.nota1;
    aluno1 = i+1;
  }
  media = (dados_alunos.nota1 + dados_alunos.nota2 + dados_alunos.nota3)/3;
  if(media > maior_media){
    maior_media = media;
    aluno2 = i+1;
  }
  if(media < menor_media){
    menor_media = media;
    aluno3 = i+1;
  }
  if(media >= 6){
    printf("ALUNO APROVADO.\n\n");
  }
  else{
    printf("ALUNO REPROVADO.\n\n");
  }
}

printf("O %dº aluno teve a maior nota no primeira prova, sua nota foi de :%lf\n", aluno1, maior);
printf("O %dº aluno teve a maior média geral, sua média foi de: %lf\n", aluno2, maior_media);
printf("O %dº aluno teve a menor média geral, sua média foi de: %lf\n", aluno3, menor_media);
return 0;
}
//Exercício 3
#include <stdio.h>
#include <string.h>

float media(float n1,float n2,float n3){
  float total = (n1+n2+n3)/3;

  return total;
}

void aprovacao(float m){
  if (m<7){
    printf("\nReprovado");
  }else {
    printf("\nAprovado");
  }
}

typedef struct aluno{
   char nome[50];
   int matricula;
   float nota1, nota2, nota3, media;
}listaaluno;

int main(void) {
  listaaluno pessoa[5];
  
for (int j = 0; j < 5; j++){
  printf("\nDigite o nome:\t");
  scanf(" %50[^\n]s", pessoa[j].nome);

  printf("\nDigite a matrícula:\t");
  scanf("%d", &pessoa[j].matricula);
  
  printf("\nDigite a primeira nota:\t");
  scanf(" %f", &pessoa[j].nota1);
    while (pessoa[j].nota1 < 0 || pessoa[j].nota1 > 10){
      printf("\nDigite um valor válido:\t");
      scanf(" %f", &pessoa[j].nota1);
    }

  printf("\nDigite a segunda nota:\t");
  scanf(" %f", &pessoa[j].nota2);
    while (pessoa[j].nota2 < 0 || pessoa[j].nota2 > 10){
      printf("\nDigite um valor válido:\t");
      scanf(" %f", &pessoa[j].nota2);

  printf("\nDigite a terceira nota:\t");
  scanf(" %f", &pessoa[j].nota3);
    while (pessoa[j].nota3 < 0 || pessoa[j].nota3 > 10){
      printf("\nDigite um valor válido:\t");
      scanf(" %f", &pessoa[j].nota3);

  pessoa[j].media = media(pessoa[j].nota1, pessoa[j].nota2, pessoa[j].nota3);
  
}

float maiornota = pessoa[0].nota1, maiormedia = pessoa[0].media, menormedia = pessoa[0].media;
int n ,n2 ,n3 ;

for (int i = 0; i < 5; i++){
  printf("\nBoletim - Nome: %s , Matrícula: %d , Média Final: %.2f", pessoa[i].nome, pessoa[i].matricula, pessoa[i].media);
  aprovacao(pessoa[i].media);
  printf("\n");

  if (pessoa[i].nota1 > maiornota){
    maiornota = pessoa[i].nota1 ;
    n = i;
  }
  if (pessoa[i].media < menormedia){
    menormedia = pessoa[i].media ;
    n2 = i;
  }
  if (pessoa[i].media > maiormedia){
    maiormedia = pessoa[i].media ;
    n3 = i;
  }
}
  printf("\nMaior nota da primeira prova: %s - %.2f", pessoa[n].nome, maiornota);
  printf("\nMenor média: %s - %.2f", pessoa[n2].nome, menormedia);
  printf("\nMaior média: %s - %.2f", pessoa[n3].nome, maiormedia);
   
  return 0;
}
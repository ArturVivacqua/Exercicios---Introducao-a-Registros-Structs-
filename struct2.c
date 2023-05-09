//Exercício 2
#include <stdio.h>
#include <string.h>

typedef struct aluno{
   char nome[50], curso[50];
   int matricula;
}listaaluno;

int main(void) {
  printf("\n");
  listaaluno pessoa[5];
for (int j = 0; j < 5; j++){
  printf("\nDigite o nome:\t");
  scanf(" %50[^\n]s", pessoa[j].nome);

  printf("\nDigite a matrícula:\t");
  scanf("%d", &pessoa[j].matricula);
  
  printf("\nDigite o curso:\t");
  scanf(" %50[^\n]s", pessoa[j].curso);
}
for (int i = 0; i < 5; i++){
  printf("\nRegistro - Nome: %s , Matrícula: %d , Curso: %s", pessoa[i].nome, pessoa[i].matricula, pessoa[i].curso);
}

  
  return 0;
}
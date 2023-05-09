//Exercício 4
#include <stdio.h>
#include <string.h>

typedef struct aluno{
   char nome[50];
   int matricula;
   float  media;
}listaaluno;

int main(void) {
  listaaluno pessoa[10];
  int n1 = 0, n2 = 0;

  for (int j = 0; j < 10; j++){
  printf("\nDigite o nome:\t");
  scanf(" %50[^\n]s", pessoa[j].nome);

  printf("\nDigite a matrícula:\t");
  scanf("%d", &pessoa[j].matricula);
  
  printf("\nDigite a média final:\t");
  scanf(" %f", &pessoa[j].media);
    while (pessoa[j].media < 0 || pessoa[j].media > 10){
      printf("\nDigite um valor válido:\t");
      scanf(" %f", &pessoa[j].media);
      
    }
  if (pessoa[j].media < 5){
    n2 +=1;
  }
  if (pessoa[j].media >= 5){
    n1 +=1;
  
  }
}

listaaluno aprovados[n1], reprovados[n2];

int ia = 0;
int ir = 0;

for (int i = 0; i < 10; i++) {
  if (pessoa[i].media < 5) {
    reprovados[ir].media = pessoa[i].media;
    strcpy(reprovados[ir].nome, pessoa[i].nome);
    reprovados[ir].matricula = pessoa[i].matricula;
    ir++;
  } else {
    aprovados[ia].media = pessoa[i].media;
    strcpy(aprovados[ia].nome, pessoa[i].nome);
    aprovados[ia].matricula = pessoa[i].matricula;
    ia++;
  }
}

printf("\nAPROVADOS\n");
for (int y = 0; y < n1 ; y++){
    printf("\n - Nome: %s , Matrícula: %d , Média Final: %.2f", aprovados[y].nome, aprovados[y].matricula, aprovados[y].media);
}

printf("\nREPROVADOS\n");
for (int z = 0; z < n2 ; z++){
    printf("\n - Nome: %s , Matrícula: %d , Média Final: %.2f", reprovados[z].nome, reprovados[z].matricula, reprovados[z].media);
}
  return 0;
}
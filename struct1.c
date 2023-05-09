//Exercício 1
#include <stdio.h>
#include <string.h>

typedef struct aluno{
   char nome[50], endereco[50];
   int idade;
}listaaluno;

int main(void) {
  printf("\n");
  listaaluno pessoa;
  
  printf("\nDigite o nome:\t");
  scanf(" %50[^\n]s", pessoa.nome);

  printf("\nDigite a idade:\t");
  scanf("%d", &pessoa.idade);
  
  printf("\nDigite o endereço:\t");
  scanf(" %50[^\n]s", pessoa.endereco);


  printf("\nRegistro - Nome: %s , idade: %d , Endereço: %s", pessoa.nome, pessoa.idade, pessoa.endereco);


  
  return 0;
}
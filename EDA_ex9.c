#include <stdlib.h>
#include <stdio.h>
#define tam 100

char **aloca(int);
char **preen_cont(char **, int, int *);

int main(){
  int linhas = 0, cont_espa = 0;
  char **palavras = NULL;

  scanf("%d", &linhas);
  palavras = aloca(linhas);
  palavras = preen_cont(palavras, linhas, &cont_espa);

  printf("%d\n", cont_espa);
  return 0;
}

char **aloca(int linhas){
  char **aux = NULL;
  int a = 0;

  if(!(aux = (char**)malloc(sizeof(char*)*linhas)))
    return NULL;

    for(a = 0; a < linhas; a++){
      if(!(aux[a] = (char*)malloc(sizeof(char)*tam))){
        printf("Erro ao alocar vetor de palavras");
        exit(EXIT_FAILURE);
      }
    }
  return aux;
}

char **preen_cont(char **pala, int linhas, int *cont){
  int a, b;
  for(a = 0; a < linhas; a++){
    scanf("\n%[^\n]s", pala[a]);
  }

  for(a = 0; a < linhas; a++)
    for(b = 0; b < tam; b++){
      if(pala[a][b] == ' '){
        *cont += 1;
      }
  }
  return pala;
}

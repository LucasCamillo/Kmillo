#include <stdlib.h>
#include <stdio.h>

int *soma_vetores(int *, int *, int );

int main(){
  int *vet1, *vet2, *p, n;
  scanf("%d", &n);

  if(!(vet1 = (int*)(malloc(sizeof(int)*n)))){
    printf("ERRO AO ALOCAR");
    return EXIT_FAILURE;
  }
  int cont;

  for(cont = 0; cont < n; cont++){
    scanf("%d", &vet1[cont]);
  }

  if(!(vet2 = (int*)(malloc(sizeof(int)*n)))){
    printf("ERRO AO ALOCAR ");
    return EXIT_FAILURE;
  }

  for(cont = 0; cont < n; cont++){
    scanf("%d", &vet2[cont]);
  }

  if(!(p = (int*)(malloc(sizeof(int)*n)))){
    printf("ERRO AO ALOCAR ");
    return EXIT_FAILURE;
  }
  p = soma_vetores(vet1,vet2,n);

  for(cont = 0; cont < n; cont++){
    printf("%d ", p[cont]);
  }
  
  free(vet1);
  free(vet2);
  free(p);
  
  printf("\n");
  return 0;
}

int *soma_vetores(int *vet1, int *vet2, int tam){
  int *vetf, cont;

  if(!(vetf = (int*)(malloc(sizeof(int)*tam)))){
    printf("ERRO AO ALOCAR ");
  }

  for(cont = 0; cont < tam; cont++){
    vetf[cont] = vet1[cont] + vet2[cont];
  }

  return vetf;
}

#include <stdlib.h>
#include <stdio.h>

int *deslocamento(int *, int);

int main(){
	int tam, desloca;
  	int *v = NULL;
  	//int n_vetor[100] = {}; //zera todas as casas do vetor
  	int *n_v = NULL;
  	
  	//Pega tamanho
 	scanf("%d", &tam);
 	
  	//malloc vetor
  	if(!(v = (int*)malloc(tam*sizeof(int)))){
		printf("Erro ao alocar vetor\n");
		exit(EXIT_FAILURE);
	}
	
	
	//Prenche vetor
	int cont;
	for(cont = 0; cont < tam; cont++){
		scanf("%d", &v[cont]);
	}
	
	//Pega deslocamento
	scanf("%d", &desloca);
	
	n_v = deslocamento(v, desloca);
	
	for(cont = 0; cont < (tam - desloca); cont++){ //PRINT
		printf("%d ", n_v[cont]);
	}
	//free(n_v);
	free(v);
	
  	return 0;
}

int *deslocamento(int *v, int d){
	int cont;
	for(cont = 0; cont < d; cont++){
		v++; //Anda uma casa		
	}
	
	
	return v;
}

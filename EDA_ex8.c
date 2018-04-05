#include <stdlib.h>
#include <stdio.h>

int *aloc(int *, int);
int *preen(int *, int);
int *f_inverte_INT(int *, int);

int main(){
	int *vet = NULL, *vetf, tam, aux;
	scanf("%d", &tam);

	vet = aloc(vet, tam);
	vet = preen(vet, tam);
	vetf = f_inverte_INT(vet, tam);

	for(aux = 0; aux < tam; aux++){
		printf("%d ", vetf[aux]);
	}
	printf("\n");

	return 0;
}

int *aloc(int *vet, int tam){

	if(!(vet = (int*)malloc(sizeof(int)*tam))){
		printf("erro ao alocar vetor");
		return NULL;
	}

	return vet;
}

int *preen(int *vet, int tam){
	int cont;
	for(cont = 0; cont < tam; cont++){
		scanf("%d", &vet[cont]);
	}

	return vet;
}

int *f_inverte_INT(int *vet_or, int tam){
	int *vet_n = NULL, inv, aux;

	inv = tam;
	vet_n = aloc(vet_n, tam);
	for(aux = 0; aux < tam; aux++){
		inv--;
		vet_n[aux] = vet_or[inv];
	}

	return vet_n;
}

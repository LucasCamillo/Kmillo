#include <stdlib.h>
#include <stdio.h>

int **aloc_preenc(int i, int j);
int maior(int **, int, int);
void libera(int **, int);

int main(){
	int **mat, i, j, num;
	
	scanf("%d %d", &i, &j);
	mat = aloc_preenc(i, j);
	num = maior(mat, i, j);
	printf("%d\n", num);

	return 0;
}

int **aloc_preenc(int i, int j){	
	int **aux, conti, contj;
	
	if(!(aux = (int**)malloc(sizeof(int*)*i))) 				//Aloca linha
		return NULL;
	
	for(conti = 0; conti < i; conti ++){
		if(!(aux[conti] = (int*)malloc(sizeof(int)*j))){				//Aloca coluna por linha
		printf("Erro ao alocar matriz\n");
		exit(EXIT_FAILURE);
		}
	}
	
	for(conti = 0; conti < i; conti++){
		for(contj = 0; contj < j; contj++)
			scanf("%d", &aux[conti][contj]);
	}
	
	return aux;
}

int maior(int **mat, int i, int j){
	int aux_i, aux_j, num;
	num = 0;
	
	for(aux_i = 0; aux_i < i; aux_i++){
		for(aux_j = 0; aux_j < j; aux_j++){
			if(num < mat[aux_i][aux_j])				//Se for maior substitui
			num = mat[aux_i][aux_j];
		}
	}
	
	return num;
}

void libera(int **mat, int i){
	int aux;
	
	for(aux = 0; aux < i; aux++)
		free(mat[aux]);
	free(mat);
}

#include <stdlib.h>
#include <stdio.h>

int **alocar_mat(int , int );
int **preenche_mat(int **, int, int);
int **multiplica_mat(int **, int, int, int);
void print_mat(int **, int, int);
void libera(int **, int);

int main(){
	int i, j;
  	int **matriz;
  	int mult;
  	
  	scanf("%d %d", &i, &j); 					//tamanho da matriz
  	matriz = alocar_mat(i, j); 					//aloca
  	matriz = preenche_mat(matriz, i, j);		 //preenche
  	
  	scanf("%d", &mult);
  	matriz = multiplica_mat(matriz, i, j, mult);  //multiplica pelo indice
  	print_mat(matriz, i, j);
  
  	libera(matriz, i);
	return 0;
}

int **alocar_mat(int i, int j){
    int **aux = NULL;
	int a;
  
    if (!(aux = (int**)malloc(sizeof(int*)*i)))
		return NULL;
 
    for( a = 0; a < i ; a++ ){						 // aloca o tamanho necessario
      if(!(aux[a] = (int*)malloc(sizeof(int)*j))){
			printf("Erro ao alocar matriz\n");
			exit(EXIT_FAILURE);
		}
    }

	return aux;
}

int **preenche_mat(int **mat, int i, int j){
	int auxi, auxj;
	
	for(auxi = 0; auxi < i; auxi ++){				//escreve uma linha e pula pra proxima
		for(auxj = 0; auxj < j; auxj++) 		
		scanf("%d", &mat[auxi][auxj]);
	}
	
	return mat;
}

int **multiplica_mat(int **mat, int i, int j, int mult){
	int auxi, auxj;
	
	for(auxi = 0; auxi < i; auxi ++){				//multiplica uma linha e pula pra proxima
		for(auxj = 0; auxj < j; auxj++) 		
		mat[auxi][auxj] = mult*mat[auxi][auxj];
	}
	return mat;
}

void print_mat(int **mat, int i, int j){
	int auxi, auxj;
	
	for(auxi = 0; auxi < i; auxi ++){				//printa uma linha e pula pra proxima
		for(auxj = 0; auxj < j; auxj++) 			
		printf("%d ", mat[auxi][auxj]);
	printf("\n");
	}

}

void libera(int **mat, i){
  int a;
  for(a = 0; a < i; a++)
    free(mat[a]);
  free(mat);
}

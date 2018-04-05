#include <stdio.h>
#include <stdlib.h>

char *retMaior(char *, char *);					//Escopo da função

int main(){
	char str1[100], str2[100];
	char *recebe;
	
	scanf("%[^\n]s", str1); 					//String com espaçamento
	getchar();									//AVISA que vai vir outra string com espaçamento
	scanf("%[^\n]s", str2);
	recebe = retMaior(str1,str2); 				//Chamada da função
	
	printf("%s", recebe);
	
	return 0;
}

char *retMaior(char *str1, char *str2){
	int cont1, cont2;
	char *cop1, *cop2;
	cop1 = str1;
	cop2 = str2;
	
	for(cont1 = 0; *str1++ != '\0'; cont1++); 	//tamanho
	for(cont2 = 0; *str2++ != '\0'; cont2++);
	
	if(cont1 > cont2){
		return cop1;
	}
  
	return cop2;
}

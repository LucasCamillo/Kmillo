#include <stdlib.h>
#include <stdio.h>

char *concatenar(char *, char *);

int main(){
    char str1[20], str2[20];
    scanf("%s", str1);
    scanf("%s", str2);
    
    char *p;
    p =  concatenar(str1, str2);
	printf("%s\n", p);
	free(p);
	p = NULL;
	
    return 0;
}

char *concatenar(char *str1, char *str2){
  int size1, size2;
  char *pont = NULL;

    for(size1 = 0; str1[size1] != '\0'; size1++){

    }
    for(size2 = 0; str2[size2] != '\0'; size2++){

    }
    
  int tam = size1 + size2;
  pont = (char *)malloc(tam*sizeof(char));
  
  int contf;
  	for(contf = 0; contf != size1 ; contf++){
      pont[contf] = str1[contf];
     
    }
  int zero;
  	for(zero = 0; zero < size2; zero++){
      pont[contf] = str2[zero];
      contf++;
    }
    pont[contf] = '\0';
	
	return pont;
}

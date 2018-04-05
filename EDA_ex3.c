#include <stdio.h>
#include <stdlib.h>

int *f_marior(int *, int *);

int main(){
	int v1,v2;
	int *pont;
	scanf("%d %d", &v1, &v2);
	
	pont = f_marior(&v1, &v2);
	printf("%d\n", *pont);	
}

int *f_marior(int *v1, int *v2){
	if( v1 > v2 ) return v1;
	
	return v2;
}

#include<stdio.h>

int main(){
	
	int n,i;
	
	printf("Introduzca el tamaño del vector: ");
	scanf("%i",&n);
	
	int vector[n];
	int segundovector[n];
	
	for(i=0;i<n;i++){
		printf("Introduzca el valor en la posicion %i: ",i+1);
		scanf("%i",&vector[i]);
	}
	
	for(i=0;i<n;i++){
		segundovector[i]=vector[i];
	}
	
	printf("\nPrimer Vector : \n");
	for(i=0;i<n;i++){
		printf("Posicion %i = %i\n",i+1,vector[i]);
	}
	
	printf("\n\nSegundo Vector : \n");
	for(i=0;i<n;i++){
		printf("Posicion %i = %i\n",i+1,segundovector[i]);
	}
	
	return 0;
}
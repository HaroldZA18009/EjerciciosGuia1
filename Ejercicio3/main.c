#include<stdio.h>
#include<math.h>

int main(){
	int n,i,total;
	float suma=0, media = 0.0, varianza=0.0, desviacionestandar = 0.0;
	
	//Asignando tamaño del vector
	printf("Ingrese el tamanio del vector: ");
	scanf("%i",&n);
	
	float vector[n];
	
	//Llenando el vector
	for(i=0;i<n;i++){
		printf("Introduzca el valor en la posicion %i: ",i+1);
		scanf("%f",&vector[i]);
	}
	
	//Mostrando Datos
	printf("\nSus datos :\n");
	
		for(i=0;i<n;i++){
			printf("Posicion %i = %.2f\n",i+1,vector[i]);
		}
		
	//Contando datos totales	
	printf("\nSu total de datos son %i: \n",n);
	
	//Sacando Media
	for(i=0;i<n;i++){
		suma+=vector[i];
	} 
	
	media = suma/n;
	printf("\nMedia de los datos: %.2f ",media);
	
	//Sacando la varianza
	for(i=0;i<n;i++){
		varianza+=pow(vector[i]-media,2);
	}

	varianza /= n;

	printf("\nLa varianza es: %.2f ",varianza);

	//Sacando desviacion estandar

	desviacionestandar = sqrt(varianza);
	
	printf("\nLa desviacion estandar es: %.2f ",desviacionestandar);

	return 0;
}
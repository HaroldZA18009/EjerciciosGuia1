#include<stdio.h>

int main(){
	int i, eliminar, posicion,tamanio;
	
	//Asignando Tamaño al vector
	printf("¿Cual ser el tamaño del vector?: ");
	scanf("%i",&tamanio);
	
	int vector[tamanio];
	
	//Llenando el vector
	for(i=0;i<tamanio;i++){
		printf("Introduzca valor de la posicion %i: ",i+1);
		scanf("%i",&vector[i]);
	}
	printf("\nMostrando Vector :\n");
	//Mostrando vector
	for(i=0;i<tamanio;i++){
		printf("Elemento [%i] Posicion %i = %i\n",i,i+1,vector[i]);
	}

	//Eliminando elemento del vector
	printf("\n¿Que posicion desea eliminar?: ");
	scanf("%i",&posicion);
	
	if(posicion>tamanio){
		printf("El valor colocado es mayor que el tamaño del vecto");
	}
	else{
		eliminar = vector[posicion-1];
		for(i=0;i<tamanio;i++){
			if(i==(posicion-1)){
				while(i<tamanio){
					vector[i] = vector[i+1];
					i++;
				}
				break;
			}
		}
	printf("\nMostrando Vector :\n");
		tamanio-=1;
		for(i=0;i<tamanio;i++){
			printf("Elemento [%i] Posicion %i = %i\n",i,i+1,vector[i]);
		}
		
		printf("\nNumero eliminado: %i",eliminar);
	}
	return 0;
}
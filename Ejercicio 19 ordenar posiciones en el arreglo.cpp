#include <iostream>

using namespace std;

int main(){
	
	int a[]={4,3,5,1,6,9,8,7,2};
	int indice;
	int temporal;
	int ciclo;
	
	
	for(ciclo = 0;ciclo < 9 ; ciclo++){//se incluye un segundo for anidado para arreglar las posiciones.metodo de la burbuja.
		for(indice = 0 ; indice < 9 ; indice++){
		if(a[indice]>a[indice+1]){//movimiento de posiciones en le arreglo. 
			temporal = a[indice];//Almacenamos temoralmete la posicion 
			a[indice]=a[indice+1];
			a[indice+1]= temporal;
	}
			
			
		}
		
		
	}
	for(indice = 0; indice < 9 ; indice++){
		cout << a[indice];
		
	}
	
	
	
		
}

#include <iostream>

using namespace std;

int main(){
	
	int a[] = {4,6,8,2,6,9,6,1};
	int b[3];
	int indice=0;//variable para recorrer el arreglo
	int columna=0;
	
	for (indice = 0; indice <= 8; indice++){//for para recorrer el arreglo a[]
		
		if(a[indice]==6){//pregunta si arreglo a[]+ indice es igual a 6
			
			b[columna]=indice; // nos movemos en el arreglo b[] con otra variable columna y se incrementa.
			columna++;
			
					
		}
		
				
		
		}
		for(indice = 0; indice < 3; indice++){	//aqui se muesta simepre el tamaña del arreglo b[3]. <3
		cout<<  b[indice];		
	}
			
}

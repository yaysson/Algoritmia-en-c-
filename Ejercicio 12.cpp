#include <iostream>

//metodo burbuja de ordenamiento

using namespace std;

int main(){
	
	int a[]={1,8,7,6,5,9,4,3,2};
	int indice=0;
	int mayor = 0;
	int ubicacion = 0;
	
	
	for(indice = 0 ; indice < 10 ; indice++){
		
		if(a[indice]>mayor){
			
			mayor = a[indice];
			ubicacion = indice;
			
		}
		
		
		
		
		
	}
	
	
	cout << mayor << endl;
	cout << ubicacion << endl;
	
	
	
	
}

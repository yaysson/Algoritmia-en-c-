#include <iostream>

using namespace std;

int main(){
	
	int a[5];
	int pares=0;
	int impares=0;
	int indice=0;
	int sumap=0;
	int sumai=0;
	
	for(indice = 0;indice <=5;indice++){
		
		cout << " ingrese numeros " << endl;
		cin>> a[indice];
		
		
		pares = a[indice] % 2;
		
		
		if (pares == 0){
			
			sumap = sumap + a[indice];
			 
			
			
		}else{
			
				sumai = sumai + a[indice];
				
								
		}
		
	}
	
	
	cout << " suma de los pares " <<sumap << endl;
	cout << " suma de los impares " <<sumai;
	
	
}

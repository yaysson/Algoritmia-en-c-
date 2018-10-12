#include<iostream>

using namespace std;

int main(){
	
	int arreglo[5];
	int indice;
	int multi = 0;
	
	for(indice = 0; indice <= 5 ;indice++){
		cout << " Digite numero " <<indice << endl;
		cin >> arreglo[indice];
		}
		
		for(indice = 0; indice <=5 ; indice++){
			
			multi = arreglo[indice] % 5;
		
		if(multi == 0){	
		   
		   cout << " / " << arreglo[indice];
			
			
		}
		
		}
		
}
					

		
	
				
		
	
	


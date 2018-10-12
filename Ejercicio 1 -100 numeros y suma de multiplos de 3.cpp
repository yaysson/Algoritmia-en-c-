#include<iostream>

using namespace std;

int main(){
	
	int num;
	int indice;
	int acumular=0;

	
	for(indice=0; indice < 100 ; indice++){
		cout << " ingrese numero "<< indice << endl;
		cin >> num;
		
		if(num % 3 == 0){
			
			acumular = acumular +num;
			
			
		}
		
	
	}
	
	cout << " la suma de los numero multiplos de 3 es = " << acumular;
	
}

#include <iostream>

using namespace std;

int main(){
	
	int arreglo[5];
	int num;
	int suma;
	int indice;
	
	for (indice =0; indice<=5;indice++){
		
		cout << "digite los numeros" << endl;
		cin >> arreglo[indice];
		suma = suma + arreglo[indice];
	
		
	}
	
	cout<< " la suma es " << suma;
	
}

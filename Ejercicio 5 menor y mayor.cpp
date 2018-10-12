#include<iostream>

using namespace std;

int main(){
	
	int a;
	int b;
	int c;
	int mayor;
	int menor;
	
	
	cout<< " ingrese numero 1" << endl;
	cin >> a;
	cout << " ingrese numero 2 " << endl;
	cin >> b;
	cout << " ingrese numero 3 " << endl;
	cin >> c;
	
	if( a>b and a>c){
		mayor = a;
	}else{
		if(b>a and b>c){
			mayor = b;
		}else{
			mayor = c;
		}
		if(a<b and a<c){
			menor = a;
			}else{
				if(b<a and b<c){
					menor = b;
					
				}else{
					 menor = c;
					
				}
			}
		
		
	}
	
	cout << " el numero mayor es " << mayor << " el numero menor es " << menor <<endl;

	
	
}	
	


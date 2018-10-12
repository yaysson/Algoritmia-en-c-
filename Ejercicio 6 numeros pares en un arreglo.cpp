#include <iostream>

using namespace std;

int main(){
	
	int a[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,6,17,18,19,20};
	int indice;
	int pares= 0;

	
	for(indice = 0;indice<=20;indice++){
		
			
		pares = a[indice]%2;
		
		if( pares == 0){
			
			cout << indice <<endl;
			
			
			
			
			
		}
			
		
		
	}
	
	
}

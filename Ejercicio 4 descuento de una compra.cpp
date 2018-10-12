#include <iostream>

using namespace std;

int main(){
	
	int compra;
	int des;
	int total;
	
	cout << " Ingrese el valor de su compra " << endl;
	cin >> compra;
	
	
	if (compra>=300){
		
		des = compra*20/100;
		total = compra - des;
		
		cout << " El total de su compra es " << total << endl;
		
	}else{
		
		if (compra >100){
			des = compra*10/100;
			total = compra - des;
			
			cout << " El total de su compra es " << total << endl;
					
		}else{
			
			if(compra<100){
				
				cout << " no cuenta con descuento valor de la compra " << compra << endl;
			}
			
			
		}
	}
	
	
		
		
	
	
	
	
	
}

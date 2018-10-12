#include <iostream>

using namespace std;
int main(){
    int N;
    cout<<("Ingresa tu nota ")<<endl;
    cin>>N;
    if(N == 19 and N == 20){
    cout<<("Tu nota es A");
    }else{
        if(N <= 18 and N >= 16){
        cout<<("Tu nota es B");
        }else{
        if(N <= 15 and N >= 13){
        cout<<("Tu nota es C");
        }else{
            if(N <= 12 and N >= 10){
            cout<<("Tu nota es D");
            }else{
            if(N <= 9 and N >= 1){
            cout<<("Tu nota es E");
            }
            else{
            cout<<("nota fuera de rango");
            }
            }
        }
        }
    }
   return 0;
}

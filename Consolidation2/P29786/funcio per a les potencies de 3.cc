#include <iostream>


using namespace std;

bool es_potencia_de_3(int n){
 bool es_potencia = false;
   int a = 1;
   
  while (a<n){
  a = a * 3;    
  
  }
  if (a==n){
    es_potencia = true;
  }
    
    return es_potencia;

}

int main(){
int n;
cin >> n;
cout << es_potencia_de_3(n) << endl;
}
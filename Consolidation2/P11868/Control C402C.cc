//#include GFUENTES97 

#include <iostream>
#include <vector>


using namespace std;


int main(){

int n ;
cin >> n;
vector<int> v(n);
vector<int> aux(n);
vector<int> w(n);

for(int i = 0; i<n; i++){
  
  cin >> v[i];
    
}

for(int i = 0; i<n; i++){
  
  cin >> aux[i];
    
}


for (int i = 0; i<n; i++){
  
  if(aux[i] == i) w[i]=v[i];
  else{
    
    w[aux[i]]=v[i];
    
  }
  
  
}
bool primer=true;
for(int a=0;a<n; a++) {
  if (primer){
    cout << w[a];
    primer = false;}
  else{ cout << " " ;
    cout << w[a];
}

}
cout << endl;
}

/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
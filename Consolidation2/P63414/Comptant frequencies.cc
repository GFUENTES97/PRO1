//#include GFUENTES97 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  
  int n;
  
  cin >> n;
  if(n>0){  
   
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
    
      cin>> v[i];
    
    }
    sort(v.begin(), v.end());
    int cont=1,cont2=1;
    
    for(int i=0; i<n; i++){
    
       if(v[i]==v[i+1]){
	 cont++;
      
	}
       else { 
	 cout << v[i] << " : " << cont << endl;
	 cont=1;
	 
      }
  
  }
 
}



}

/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
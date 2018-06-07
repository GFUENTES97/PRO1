#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matriu;


bool es_simetrica(const Matriu& m){
  int j = m.size();
  for (int i= 0; i<j; i++){
    
    for(int k=0;k<j;k++){
      
      if(m[i][k] != m[k][i]) return false;
    
  }
  
}

  
  return true;
  
}



int main(){}
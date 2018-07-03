//#include GFUENTES97 

#include <iostream>

using namespace std;

int main(){

  int n;
  bool totes=false,cap=false;
  string paraula, p1, p2 ,p3;
while(cin >> n){
  bool xula;
  if(n%2==0){
    xula=false;
      for(int i = 0;i<n;i++) cin >> paraula;    
  }
  else{
  
    for(int i = 1;i<=n;i++){
    
      cin >> paraula;
      if(i==1) p1 = paraula;
      else if(i==(n/2 +1)) p2 = paraula;
      else if(i==n)p3 = paraula;
      
    }
    
    if (p1==p2 && p2 == p3) xula = true;
    else xula=false;
    
  }

    if(xula)totes=true;
    else cap = true;
    
   
    
}

if (totes && cap) cout << "dels dos tipus" << endl;
else if(totes) cout << "totes xules" << endl;
else cout << "cap de xula" << endl;

}

/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 14:05:30
 * 
 */
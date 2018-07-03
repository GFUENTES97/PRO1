//#include GFUENTES97 

#include <iostream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;




struct Provincia { 
  string nom; 
  string capital; 
  int habitants; 
  int area; 
  double pib; 
  
};


struct Pais { 
  string nom; 
  string capital; 
  vector<Provincia> provs; 
  
};

typedef vector<Pais> Paisos;

double pib(const Paisos& p, char c, double d){
  
    double suma=0.0;
    int n= p.size();
    for(int i=0; i<n; i++){
    
      if(p[i].nom[0] == c){
  
	int m = p[i].provs.size();
	for(int j=0; j<m; j++){
	  
	  if(double (p[i].provs[j].habitants) / double (p[i].provs[j].area) > d) suma = suma + p[i].provs[j].pib;
	  
	}
	
      }
      
    }
  return suma;
}



/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 14:05:30
 * 
 */
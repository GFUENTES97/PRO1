//#include GFUENTES97 

#include <iostream>
#include <vector>

using namespace std;

typedef vector< vector<int> > Matriu;


Matriu suma(const Matriu& a, const Matriu& b){
int x = a.size();
Matriu resultat(x,vector<int>(x));
  for(int i = 0;i<x; i++){for(int k=0;k<x; k++) resultat[i][k] = a[i][k] + b[i][k];}
 
 
return resultat;
 
}




/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
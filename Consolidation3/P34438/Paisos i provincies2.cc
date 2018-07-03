//#include GFUENTES97 

#include <iostream>
//#include <string>
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

int habitants(const Paisos& p, double x){

    int suma = 0;
    int cont = 0;
    int n = p.size();                   // n == NUMERO DE PAISES
    for(int i=0; i<n; i++){
        int m = p[i].provs.size();        //  m == NUMERO DE PROVINCIAS DE CADA PA�S
        for(int j=0; j<m && cont<2 ; j++){
            if ( p[i].provs[j].pib <= x){
            cont++;
            }
        }
        if (cont>=2){
            for (int k=0; k<m; k++){
            suma = suma + p[i].provs[k].habitants;
        }
        }


        cont = 0 ;

    }
    return suma;

    }



/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
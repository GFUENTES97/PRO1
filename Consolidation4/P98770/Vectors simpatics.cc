#include <iostream>
#include <vector>
using namespace std;

void llegir_vector(vector<double>& v, int n){
	for (int i=0; i<n; i++){
		cin>>v[i];
	}
}



void calcula_posicions (const vector<double>& v, int& p, int& q, int n){
	
	p=1;  //PRE: EL VALOR MÉS GRAN MAI ÉS A LA PRIMERA POSICIÓ
	q=0;
	if(n>2){   //SI N==2 => P=1 & Q=0
		
		for(int i=2; i<n; i++){
			if(v[i]>v[p]) p=i;
		}
		for(int i=0; i<p; i++){  //CON I<P SE LE INDICA QUE COJA EL MAYOR VALOR ANTES DE P
			if(v[i]>v[q]) q=i;
		}
		
		
	}



}

void calcula_mitjana (const vector<double>& v, int maxD, int maxE, double& mitjana, int& p, int& q){
		
	double cont=p-q;
	cont++;
	double suma=0;
	
	while(q<=p){
		suma  = suma + v[q];
		q++;
	}
	
	mitjana = suma/ cont;
	
	
}

int main() {
	
	cout. setf ( ios :: fixed );
	cout. precision (6);
	
	double mitjana=0;
	int n,p=1,q=0;
	
	while(cin>>n){
		vector<double> v(n);
		llegir_vector(v,n);
		calcula_posicions (v,p,q,n);
		calcula_mitjana(v, v[p], v[q], mitjana,p,q);
		cout << mitjana << endl;
		mitjana=0;
	}
	
	
	
}


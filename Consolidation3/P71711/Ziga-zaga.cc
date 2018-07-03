//#include GFUENTES97 

#include <iostream>
#include <vector>

using namespace std;

typedef vector<vector<int> >  Matriu;


bool zigazaga(Matriu a, int& files, int& columnes){

for(int i=0;i<files;i++){

  for(int j=0;j<columnes-1;j++){
    
    if(a[i][j] == a[i][j+1]) return false;
    
  }
}

int aux=0;
bool primer = true;
for(int i=0; i<columnes; i++){
int j;

   if(i%2!=0){  		// SI LA COLUMNA ES IMPAR
    if(not primer){
    if (aux>= a[files-1][i]) return false;
    aux = a[0][i];} 
     
     for(j=files-1;j>0;j--){
    if(a[j][i] >= a[j-1][i]) return false;
    }
    
    
   }
   else{   
     if(not primer){	 	// SI LA COLUMNA ES PAR
     if (aux>= a[0][i]) return false;
    aux = a[files-1][i];}
   for(j=0;j<files-1;j++){
      if(a[j][i] >= a[j+1][i]) return false;
    }
     
  }

     if(primer){
       
     primer = false;
     aux = a[files-1][0];
       
    }
     
     
}


return true;
}




int main(){

int contador=0;
int files,columnes;
  while (cin>>files){
  cin >> columnes;
  Matriu a(files, vector<int> (columnes));
  for(int i = 0; i<files; i++){
  
    for(int j=0;j<columnes;j++)cin >> a[i][j];
    
  }
  contador++;
  cout  << "matriu " << contador << ": ";
  if(zigazaga(a,files,columnes)) cout <<  "si" << endl;
  else cout << "no" << endl;
  
  }
}

/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 14:05:30
 * 
 */
//#include GFUENTES97 

#include <iostream>
#include <vector>

using namespace std;

int main(){

int k = 64;
int abecedari = 26;
int n;
cin >> n;
for(int i=0;i<n;i++){

bool anagrama = true;
vector<int> lletres(abecedari);
char lletra,lletra2;
while(cin >> lletra && lletra!= '.'){
    if(lletra >= 'A' && lletra<='Z'){
    lletres[lletra-k]++;
    }
}

while(cin >> lletra2 && lletra2!='.'){
    if(lletra2>='A' && lletra2<='Z'){
    lletres[lletra2-k]--;
    }
    }
for(int j=0;j<abecedari && anagrama==true;j++){
    if(lletres[j]!=0) anagrama = false;
}
if(anagrama) cout << "SI" << endl;
else cout << "NO" << endl;
}



}



/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 14:05:30
 * 
 */
//#include GFUENTES97 

#include <iostream>
#include <string>
#include <vector>


using namespace std;
bool es_palindrom(string s){

int k = s.size() - 1;
int i = 0;
while(s[i] == s[k] && i<k){
    i++;
    k--;
}
if(s[i] != s[k]) return false;

return true;
}



int main()
{
    int n;
    while(cin >> n){
    vector<string> llista(n);
    vector<bool> palindrom(n);

    for(int i=0; i<n; i++){
        cin >> llista[i];
        if(es_palindrom(llista[i]))palindrom[i] = true;
        else palindrom[i] = false;

    }
    cout << "-----" << endl;
    int maxim=0;
    bool algun = false;
    for(int i=0;i<n; i++){
        if(palindrom[i] == 1) algun = true;
    }
    if(not algun && n!=0) cout << "cap palindrom" << endl;
    else{
    for (int i=0;i<n;i++){
        if(palindrom[i] && llista[i].size()>maxim) maxim = llista[i].size();
    }
    for(int i=0; i<n; i++){
        if(palindrom[i] && llista[i].size()==maxim) cout << llista[i]<<endl;
    }
    }}
}


/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 14:05:30
 * 
 */
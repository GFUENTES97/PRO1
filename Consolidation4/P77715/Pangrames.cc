#include <iostream>
#include <vector>
using namespace std;

int main(){


char lletra;
while(cin >> lletra){
    if(lletra!='.'){
        vector<bool> abecedari(26,false);
        if(lletra>='a' && lletra<='z') abecedari[lletra-'a'] = true;
        else if(lletra>='A' && lletra <= 'Z') abecedari[lletra-'A'] = true;

         while (cin >> lletra && lletra != '.') {
                                if (lletra >= 'A' && lletra <= 'Z') abecedari[int(lletra - 'A')] = true;
                                else if (lletra >= 'a' && lletra <= 'z') abecedari[int(lletra - 'a')] = true;
         }
        bool trobat = false;
        for(int i=0;i<26 && not trobat;i++){
            if(not abecedari[i]) trobat = true;
            }
        if(not trobat) cout << "SI" << endl;
        else cout << "NO" << endl;
    }
    else cout << "NO" << endl;
}

}

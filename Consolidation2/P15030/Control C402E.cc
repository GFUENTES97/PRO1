#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int n,p,k;
    char index;



    cin >> n >> p >> k >> index;

    vector<string> llista(n);


    for(int a=0; a<n ; a++){
        cin >> llista[a];


    }
    int pos=p;
    bool primer=true;
    if(index=='d'){
        for(int a=0; a<k; a++){
                pos++;
                if (not primer) cout << ' ';
                if(pos==n){
                    pos = 0;

                }
                cout << llista[pos];
                primer = false;
        }

    }
    else if(index == 'e') {
        for(int a=0; a<k ; a++){
                pos--;

                if(not primer) cout << ' ';
                if(pos<0) pos = n-1;


                cout << llista[pos];
                primer = false;
        }
    }

    cout << endl;

}

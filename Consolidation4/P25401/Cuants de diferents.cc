//#include GFUENTES97 

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
   int n;
   while(cin >> n){
    int contador = n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin >> v[i];
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        if(v[i]==v[i+1]) contador--;
        }
    cout << contador << endl;
    contador = 0;
    }


}


/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
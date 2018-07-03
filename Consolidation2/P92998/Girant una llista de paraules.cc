//#include GFUENTES97 

#include <iostream>

using namespace std;

void gira(int& n){
string paraula;

    if(n>0){
        cin >> paraula;
        n--;
        gira(n);
        cout << paraula << endl;

    }
}


int main()
{
int n;
cin >> n;
gira(n);


}


/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
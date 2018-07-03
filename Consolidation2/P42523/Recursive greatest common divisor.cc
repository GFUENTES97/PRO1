//#include GFUENTES97 

#include <iostream>

using namespace std;

int gcd (int a, int b){

    while (b!=0){
        int n = a % b;
        a = b;
        b = n;
    }

    return a;

    }



int main()
{
    int x,y;
    while (cin >> x >> y) cout << gcd(x,y) << endl;
}


/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 14:05:30
 * 
 */
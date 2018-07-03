//#include GFUENTES97 

#include <iostream>

using namespace std;

int main()
{

    int contador = 0;
    string c;


    while (cin >> c){

        if (c == "hello")
            contador++;
        else
            contador = contador;

    }


    cout << contador << endl;

    }


/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
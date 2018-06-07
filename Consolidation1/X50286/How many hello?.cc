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

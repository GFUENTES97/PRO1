//#include GFUENTES97 

#include <iostream>

using namespace std;

int main()
{
    int n,p,q;

   while (cin >> n){

    p = n; // IR� INCREMENTANDO DE DOS EN DOS (EQUIS)
    q = n - 1; // IR� DECREMENTANDO DE UNO EN UNO (ESPACIOS)

        for (int a = 0; a<n; a++){

            for (int b = 0; b<q; b++){
            cout << " ";}


            for (int c = 0; c<p;c++){
            cout << "X";
            }

            q--;
            p = p + 2;
            cout << endl;
        }

        p = p - 2;
        q = 1;
        for (int d = 1; d<n; d++){
            for(int e = 0; e<p; e++){
                cout << "X";                       // CUANDO LLEGUE A LA FILA DEL MEDIO HABR�N TANTAS "X" COMO |p-2|
            }
            cout << endl;                       // Y TANTAS FILAS COMO |n|
        }


    // AHORA LA PARTE DE ABAJO

        for (int f = 1; f<n; f++){
                p = p - 2;
            for (int g = 0; g<q; g++){
                cout << " ";
            }

            for(int h = 0; h<p; h++){
                cout << "X";
            }
        q++;
        cout << endl;

        }
cout << endl;
    }


}


/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 14:05:30
 * 
 */
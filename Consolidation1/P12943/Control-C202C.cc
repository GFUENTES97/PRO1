//#include GFUENTES97 

#include <iostream>


using namespace std;

int main()
{
    int n,i = 0;
    cin >> n;
    char resposta;
    int countA = 0, countB = 0, countC = 0;

    while(i<n){
        cin >> resposta;
        i++;
        if (resposta == 'a')
            countA++;
        else if (resposta == 'b')
            countB++;
        else if (resposta == 'c')
            countC++;
    }
    if (countA >= countB && countA >= countC){
        cout << "majoria de a" << endl;
        cout << countA << " " << "repeticio(ns)" << endl;
    }
    else if (countB >= countA && countB >= countC){
        cout << "majoria de b" << endl;
        cout << countB << " " << "repeticio(ns)" << endl;
    }
    else if (countC >= countA && countC >= countB){
        cout << "majoria de c" << endl;
        cout << countC << " " << "repeticio(ns)" << endl;
    }

}


/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
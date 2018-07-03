//#include GFUENTES97 

#include <iostream>

using namespace std;

void barrejar_base(int x, int y){

        if (x!=0 && y!=0){
            barrejar_base(x/2,y/2);
            cout << x%2;
            cout << y%2;
        }


}



int main()
{
  int x,y;
  while (cin >> x >> y){


  barrejar_base(x,y);
  cout << endl;}

}


/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
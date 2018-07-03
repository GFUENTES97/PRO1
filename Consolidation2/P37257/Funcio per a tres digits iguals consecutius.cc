//#include GFUENTES97 

#include <iostream>

using namespace std;

bool tres_digits_seguits_iguals(int n, int b){
	if(b*b>n) return false;
	int residu1 = n%b;
	int residu2 = (n/b)%b;
	int residu3 = (n/(b*b))%b;
	if (residu1==residu2 && residu2 == residu3) return true;
	else tres_digits_seguits_iguals(n/b,b);
}


int main()
{
  int n,b;
  cin >> n >> b;
  cout << tres_digits_seguits_iguals(n,b) << endl;

}


/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
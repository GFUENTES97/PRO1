//#include GFUENTES97 

#include <iostream>

using namespace std;

int main()
{

    int x,y,z,m,n,o;
    string order;

    cin >> x >> y >> z >> order;

    if ((x>=y)and (x>=z))
        m = x;
     
    else if ((z>=x)and(z>=y))
        m = z;
    
    else if ((y>=x)and(y>=z))
        m = y;
     
    if ((x<=y)and (x<=z))
        o = x;
    
    else if ((z<=x)and(z<=y))
        o = z;

    else if ((y<=x)and(y<=z))
        o = y;

    if (((x<=y)and (x>=z))or ((x>=y)and(x<=z)))
        n = x;
    
    else if (((y<=x)and (y>=z))or ((y>=x)and(y<=z)))
        n = y;

    else if (((z<=x)and (z>=y))or ((z>=x)and(z<=y)))
        n = z;
        

	if (order=="ABC")
        cout << o << " " << n << " " << m << endl;

    else if (order=="ACB")
        cout << o << " " << m << " " << n << endl;

    else if (order=="BAC")
        cout << n << " " << o << " " << m << endl;

    else  if (order=="BCA")
        cout << n << " " << m << " " << o << endl;
        
    else  if (order=="CAB") 
        cout << m << " " << o << " " << n << endl;
        
    else  if (order=="CBA")
        cout << m << " " << n << " " << o << endl;
        
}

/* 
 * 
 *  last update: 
 * 
 *  03/07/2018 12:46:07
 * 
 */
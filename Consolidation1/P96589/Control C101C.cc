#include <iostream>

using namespace std;

int main()
{
    char n;
    cin >> n;

    if (n>='A' && n<='z'){
        cout << "lletra" << endl;
    }

    else if (n>='0' && n<='9'){
        cout << "digit" << endl;
    }

    else {
        cout << "res" << endl;

    }

}
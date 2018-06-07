#include <iostream>

using namespace std;

int main()
{
    char ch;
    cin >> ch;

    if (ch>='a' && ch>'Z')
    {
        cout << "Lowercase letter" << endl;

    }
    else if (ch>='A' && ch<='Z')
    {
        cout << "Uppercase letter" << endl;
    }

    else
        cout << "Number" << endl;
    }



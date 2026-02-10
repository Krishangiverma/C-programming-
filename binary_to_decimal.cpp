#include <iostream>
using namespace std;
int main()
{
    int binary;
    cout << "enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int base = 1;
    while (binary > 0)
    {
        int lastdigit = binary % 10;
        decimal = decimal + lastdigit * base;
        base = base * 2;
        binary = binary / 10;
    }
    cout << "decimal value = " << decimal << endl;
    return 0;
}
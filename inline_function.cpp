#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    int c = a * b;
    return c;
}
int main()
{
    int x = 6, y = 5;
    cout << product(x, y);
    return 0;
}

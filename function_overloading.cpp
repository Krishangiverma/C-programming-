#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << "sum of 3 and 6 is " << sum(3, 6) << endl;
    cout << "sum of 3,4 and 5 is " << sum(3, 4, 5) << endl;
    return 0;
}
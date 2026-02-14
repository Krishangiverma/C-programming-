#include <iostream>
using namespace std;
class base1
{
protected:
    int base1int;

public:
    void setbase1int(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void setbase2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void setbase3int(int a)
    {
        base3int = a;
    }
};
class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << base1int << endl
             << base2int << endl
             << base3int << endl;
        cout << "sum of these value is " << base1int + base2int + base3int << endl;
    }
};
int main()
{
    derived harry;
    harry.setbase1int(7);
    harry.setbase2int(5);
    harry.setbase3int(8);
    harry.show();
    return 0;
}
// static member variable(in a class) is shared by all objects of the class
#include <iostream>
using namespace std;
class student
{
public:
    static int count;
    student()
    {
        count++;
    }
};
int student::count = 0;
int main()
{
    student s1, s2, s3;
    cout << "total students: " << student::count;
    return 0;
}
#include <iostream>
using namespace std;
class student
{
protected:
    int roll;

public:
    void setnumber(int a)
    {
        roll = a;
    }
    void printnumber()
    {
        cout << "your roll number is " << roll << endl;
    }
};
class test : virtual public student
{
protected:
    float maths, physics;

public:
    void setmarks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void printmarks()
    {
        cout << "your result is here" << endl
             << maths << endl
             << physics << endl;
    }
};
class sports : virtual public student
{
protected:
    float score;

public:
    void setscore(float sc)
    {
        score = sc;
    }
    void printscore()
    {
        cout << "your PT score is " << score << endl;
    }
};
class result : public test, public sports
{
private:
    float total;

public:
    void display()
    {
        total = maths + physics + score;
        printnumber();
        printmarks();
        printscore();
        cout << "your total score is :" << total << endl;
    }
};
int main()
{
    result harry;
    harry.setnumber(42000);
    harry.setmarks(78.9, 99.5);
    harry.setscore(9);
    harry.display();
    return 0;
}

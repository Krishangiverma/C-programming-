#include <iostream>
#include <cmath>
using namespace std;
class point;
class calculate
{
public:
    double dist(point, point);
};
class point
{
    int x, y;
    friend class calculate;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displaypoint()
    {
        cout << "point is (" << x << "," << y << ")" << endl;
    }
};
double calculate::dist(point o1, point o2)
{
    return sqrt((o2.x - o1.x) * (o2.x - o1.x) + (o2.y - o1.y) * (o2.y - o1.y));
}
int main()
{
    point p(3, 4);
    point q(5, 5);
    p.displaypoint();
    q.displaypoint();
    calculate c;
    cout << "distance is " << c.dist(p, q);
    return 0;
}
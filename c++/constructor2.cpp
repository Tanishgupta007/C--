#include <iostream>
using namespace std;

class Point
{
    int x, y;

    public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayp()
    {
        cout<<"The Point is (" << x << " , " << y << ")" << endl;
    }
};

int main()
{
    Point p(4,5);
    p.displayp();
    return 0;
}
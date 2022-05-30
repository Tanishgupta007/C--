#include<iostream>
using namespace std;

struct point
{
    int x;
    int y;
};

int main()
{
    point p;
    p.x = 15;
    p.y = 25;

    cout<<"The value of x and y is "<<p.x<<" " <<p.y<<endl;
    return 0;
}
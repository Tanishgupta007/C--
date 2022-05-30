#include <iostream>
using namespace std;

class complexNum
{
    int a, b;
    public:
    int input(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    int add(complexNum c1, complexNum c2)
    {
        a = c1.a + c2.a;
        b = c1.b + c2.b; 
    }
    int print()
    {
        cout<<"The complex number is :"<<a<<" + i "<<b<<endl;
    }
};
int main()
{
    complexNum c1,c2,c3;
    c1.input(1,2);
    c1.print();
    c2.input(2,3);
    c2.print();
    c3.add(c1,c2);
    cout<<"The sum of "<<c3.print();
    return 0;
}
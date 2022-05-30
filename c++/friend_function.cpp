#include <iostream>
using namespace std;

class complexnumber
{
    int real,imag;
    
    public:
    int input_number()
    {
        cout<<"Enter the real and imag part: "<<endl;
        cin>>real>>imag;
    }
    void output()
    {
        cout<<"Entered values are "<<real<<" + i "<<imag<<endl;
    }
    friend complexnumber add(complexnumber c1,complexnumber c2);
};
complexnumber add(complexnumber c1,complexnumber c2)
{
    complexnumber c3;
    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;
    cout<<"The sum is "<<c3.real<<"+ i"<<c3.imag<<endl;
}
int main()
{
    complexnumber c1,c2,c3,sum;
    c1.input_number();
    c2.input_number();
    c1.output();
    c2.output();
    sum=add(c1,c2);
    // sum.output();
    return 0;
}
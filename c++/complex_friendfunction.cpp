#include <iostream>
using namespace std;

class ComplexNum
{
    int real, imag;

public:
    int input()
    {
        cout << "Enter the value of real and imag part: " << endl;
        cin >> real >> imag;
    }
    void output()
    {
        cout << "The value entered are  : \n"
             << real << " + i " << imag << endl;
    }
    friend ComplexNum add(ComplexNum c1, ComplexNum c2);
};
ComplexNum add(ComplexNum c1, ComplexNum c2)
{
    ComplexNum c3;
    c3.real = c1.real + c2.real;
    c3.imag = c1.imag + c2.imag;
    cout << "The Sum of a and b is : " << c3.real << " + i " << c3.imag << endl;
}
int main()
{
    ComplexNum c1, c2, c3, sum;

    c1.input();
    c1.output();
    c2.input();
    c2.output();
    sum = add(c1, c2);
    return 0;
}
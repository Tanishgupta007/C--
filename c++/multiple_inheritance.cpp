#include<iostream>
using namespace std;

class base1{
    protected:
    int num1;

    public:
    int base1num(){
        cout<<"Enter the num of base 1: "<<endl;
        cin>>num1;
    };
};
class base2{
    protected:
    int num2;

    public:
    int base2num(){
        cout<<"Enter the num of base 2: "<<endl;
        cin>>num2;
    };
};
class Derived: public base1,public base2 {
    public:
    void show(){
    cout<<"The num1 is "<<num1<<endl;
    cout<<"The num2 is "<<num2<<endl;
    cout<<"The sum of num1 and num2 is: "<<num1+num2<<endl;
    }
};
int main(){
    Derived d;
    d.base1num();
    d.base2num();
    d.show();
    return 0;
}

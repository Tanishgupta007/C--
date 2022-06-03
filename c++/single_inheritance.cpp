#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;

    void set();
    int getData1();
    int getData2();
};

void Base :: set(){
    cout<<"Enter the data 1"<<endl;
    cin>>data1;
    cout<<"Enter the data 2"<<endl;
    cin>>data2;
}
int Base :: getData1(){
    return data1;
}
int Base :: getData2(){
    return data2;
}
class Derived :public Base{
    int data3;

    public:
    void getdata3();
    void display();

};
void Derived :: getdata3(){
    data3 = data2* getData1(); // Using getData1 instead of data1 because data1 is private and private data are not inherited.
};
void Derived :: display(){
    cout<<"The value of data1 is :"<<getData1()<<endl;
    cout<<"The value of data2 is :"<<data2<<endl;
    cout<<"The Multiplication of data1 and data2 is :"<<data3<<endl;
};
int main()
{
    Derived d;
    d.set();
    // d.getData1();
    // d.getData2();
    d.getdata3();
    d.display();
    return 0;
}

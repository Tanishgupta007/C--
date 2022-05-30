#include<iostream>
using namespace std;

class Complex{
    int a,b;

    public:
    Complex(){ //Default Constructor
        a=0;
        b=0;
    }
    Complex(int x,int y){//parametrized constructor
        a = x;
        b = y;
    }
    Complex(int x){ // Constructor overloading
        a = x;
        b=0;
    }
    void display()   
    {
        cout<<"The complex number is "<<a<<" + i "<<b<<endl;
    }
};
int main(){
    Complex c1(3,4);
    Complex c2(3);
    Complex c3;
    c1.display();
    c2.display();
    c3.display();
}

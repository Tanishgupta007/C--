#include<iostream>
using namespace std;

class complex{
int real , imag;

public:
complex(){};
complex(int r,int i){
    real=r;
    imag=i;
};
void output(){
    cout<<real<<"+ i"<<imag<<endl;
}

// operator overloading

complex operator +(complex r){
    complex temp;
    temp.real = real+r.real;
    temp.imag = imag+r.imag;
    return temp;
};

};
int main(){
    complex c1(3,4);
    complex c2(4,4);
    complex c3;
    c3=c1+c2; //c1.real(c2)   ---->operator overloading
    c3.output();

    return 0;
}

// c1++     ----->unary operator
// c1 + c2  ----->binary operator
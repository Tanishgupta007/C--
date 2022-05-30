#include<iostream>
using namespace std;

class Simple{
    int data1;
    int data2;
    public:
    Simple(int a,int b=10){ //Default value of b is 10
    data1 = a;
    data2 = b; 

    }
    void print();
};
void Simple :: print(){
    cout<<"The Value of data1 and data2 is "<<data1<<" and "<<data2<<endl;
    
}
int main(){
    Simple s1(1,4);
    s1.print();
    Simple s2(5); //for checking default value, as default value of b is 10
    s2.print();
    return 0;
}

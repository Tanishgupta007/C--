#include<iostream>
using namespace std;

class additions{

    private:
    int a;
    int b;
    int c;
    public:

    additions(int num1,int num2){
        a=num1;
        b=num2;
        c=num1+num2;
    }
    void display(){
        cout<<"The addition of num1 and num2 is "<<c<<endl;
    }
};
 int main() {
     // Implicit call
     additions o1( 5, 10);
     //Explicit Call 
     additions o2 = additions(10,15);
     o1.display();
     o2.display();

    return 0;
}
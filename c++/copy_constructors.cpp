#include<iostream>
using namespace std;

class Number{
    int a=15;

    public: 
    Number(){
        // a=14;// ----> For default value
    }
    Number(int num){
        a=num;
    }

    Number(Number &obj){  //------> Copy Constructor
        cout<<"Copy Constructor !!!"<<endl;
        a = obj.a;
    }

    void display(){
        cout<<"The number is: "<<a<<endl;
    }
};

int main(){
    Number o1,o2,o3,ol;
    o1.display();
    Number oz(o3); //--->Copy Constructor invoked
    oz.display();

    ol = o3; // ----> Copy Constructor not invoked

    Number om = o3;//--->Copy Constructor invoked
    om.display();
    return 0;
}

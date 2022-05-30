#include<iostream>
using namespace std;
 
 void test(int a)
 {
     cout<<"The int is "<<a<<endl;
 }
 void test(float f)
 {
     cout<<"The float is "<<f<<endl;
 }
 void test(char c)
 {
     cout<<"The char is "<<c<<endl;
 }
 int main(){
     test(5);
    //  test(5.5); It will show error that function is overload +3
    //  test(c);
    return 0;
 }
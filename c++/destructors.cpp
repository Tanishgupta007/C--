#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count=0;
class Num{
    public:
    // Num(){}
    Num(){
        count ++;
        cout<<"Constructor is called for object "<<count<<endl;
    }

    ~Num(){
        cout<<"Destructor called for object "<<count<<endl;
        count--;
    }
};
int main(){
    cout<<endl<<"Main Function"<<endl;

    Num n1;
    {
        cout<<"Block"<<endl;
        cout<<"Creating 2 more objects"<<endl;
        Num n2,n3;

    }
    cout<<"Back to main"<<endl;
    
    // n1.;
    return 0;
}

#include<iostream>
using namespace std;

namespace n1
{
    int value()
    {
        return 50;
    }
}
namespace n2
{
    double x=100;
    double value()
    {
        return x*2;
    }
}
int main()
{
   cout<<n1::value()<<endl;
   cout<<n2::value()<<endl;
   cout<<n2::x<<endl;
   return 0;

}
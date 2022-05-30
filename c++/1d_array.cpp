#include <iostream>
using namespace std;
int main()
{
    int n, i;
    int A[10];
    cout << "Enter the size of array: \n";
    cin >> n;
    cout << "Enter the elements of array: \n";
    for(i=0;i<=n-1;i++)
    {
        cin>>A[i];
    }
    return 0;
}
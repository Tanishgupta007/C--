#include <iostream>
using namespace std;

int main()
{
    int i,j;  // for pointers
    int row,column;   //for rows and columns
    int A[20][20];    //2D Array of size 10, 10

    cout<<"Enter the no of rows and columns: ";
    cin>>row>>column;
    cout<<"Enter the elements: ";

    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=column-1;j++)
        {
            cin>>A[i][j];
        }
    }
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=column-1;j++)
        {
            cout<<A[i][j];
        }
    }
    return 0;
}
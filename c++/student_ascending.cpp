#include<iostream>
using namespace std;

int main()
{
    int a[5],i;
    cout << "Enter the marks of the student: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j]=temp;
            }
        }
    };
    cout << "marks in ascending order:- " for (int i = 0; i < 5; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}
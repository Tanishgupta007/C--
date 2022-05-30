#include <iostream>
using namespace std;

inline int sum(int a, int b) // Inline function reduces the execution time
{                            // of the program and to reduce the funtion call
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter the value of a :" << endl;
    cin >> a;
    cout << "Enter the value of b :" << endl;
    cin >> b;
    cout << "The sum of a and b : " << sum(a, b) << endl;
    cout << "The sum of a and b : " << sum(a, b) << endl;
    cout << "The sum of a and b : " << sum(a, b) << endl;

    sum(a, b);

    return 0;
}
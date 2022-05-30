#include <iostream>

int main()
{
    int a, b, sum, difference;
    std::cout << "Enter First Number\n";
    std::cin >> a;
    std::cout << "Enter second Number\n";
    std::cin >> b;
    sum = a+b;
    difference = a-b;
    std::cout << "sum = " << sum;
    std::cout << "\ndifference = " << difference;
}
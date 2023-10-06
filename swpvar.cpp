// Program to swap variables using a temporary variable

#include <iostream>
using std::cin;
using std::cout;

int main(){

    int a,b,temp;
    cout << "Please enter the first variable:\n";
    cin >> a;
    cout << "Please enter the second variable:\n";
    cin >> b;

    temp =a;
    a=b;
    b=temp;
    cout << "Variable 1\n";
    cout << a << "\n";
    cout << "Variable 2\n";
    cout << b << "\n";

    return 0;
}
#include <iostream>
using std::cout;
using std::cin;

int main(){
int a=0, b=0, temp=0;
cout << "Enter the first variable:";
cin >> a;
cout << "Enter the second variable:";
cin >> b;
temp = a;
a = b;
b = temp;
cout << "After Swap:\n";
cout << "a = " << a << "\n";
cout << "b = " << b << "\n";
return 0;
}

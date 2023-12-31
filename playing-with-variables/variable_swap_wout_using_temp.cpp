#include <iostream>
using std::cout;
using std::cin;
int main(){
int a=0, b=0;
cout << "Enter the first variable:\n";
cin >> a;
cout << "Enter the second variable:\n";
cin >> b;
a = b/a;
b = b/a;
a = b*a;
cout << "After Swap:\n";
cout << "a = " << a << "\n";
cout << "b = " << b << "\n";
return 0;
}

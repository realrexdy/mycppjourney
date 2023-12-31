#include <iostream>
using std::cout, std::cin;

int var_swp(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main(){
    int a, b;
    cout << "Enter the first variable, A = ";
    cin >> a;
    cout << "\nEnter the second variable, B = ";
    cin >> b;
    var_swp(&a, &b);
    cout << "\n Swapped Variables: \n";
    cout << "\nA = " << a;
    cout << "\nB = " << b << "\n";
    return 0;
}
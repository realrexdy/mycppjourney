#include <iostream>
#include <math.h>
using std::cin, std::cout;

double factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}

int main(){
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "\n The factorial of " << fabs(num) << " is " << factorial(fabs(num)) << "\n";
}
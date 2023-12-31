#include <iostream>
using std::cin, std::cout;

double factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }
    else{
        return num * factorial(num-1);
    }
}

double nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}

int main(){
    int n, r;
    cout << "Enter the valur of n: ";
    cin >> n;
    cout << "\nEnter the valur of r: ";
    cin >> r;
    cout << "\n" << n << "C" << r << "=" << nCr(n,r) << "\n";
    return 0;
}
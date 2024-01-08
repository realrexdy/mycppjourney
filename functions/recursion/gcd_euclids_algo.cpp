#include<iostream>
using std::cin, std::cout;

int gcd(int a, int b){
    if(a>b){
        int rem = a%b;
        if(rem==0){
            return b;
        }
        else{
            return gcd(b, rem);
        }
    }
    else{
        int rem = b%a;
        if(rem==0){
            return a;
        }
        else{
            return gcd(a, rem);
        }
    }
}

int main(){
    cout << "Enter any two numbers: ";
    int a,b;
    cin >> a;
    cin >> b;
    cout << "\nGCD is " << gcd(a,b) << "\n";
    return 0;
}
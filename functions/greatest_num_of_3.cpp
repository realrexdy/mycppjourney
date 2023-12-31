#include <iostream>
using std::cout, std::cin;

int greto3(int a, int b, int c){
    int temp=0;
    if(a>b){
        temp = a;
    }
    else{
        temp = b;
    }
    if(c > temp){
        return c;
    }
    else{
        return temp;
    }
}

int main(){
    int a=0, b=0, c=0;
    cout << "Enter the first number, A = ";
    cin >> a;
    cout << "\nEnter the second number, B = ";
    cin >> b;
    cout << "\nEnter the third number, C = ";
    cin >> c;
    cout << "\nThe greatest number among the three is " << greto3(a,b,c) << "\n";
    return 0;
}
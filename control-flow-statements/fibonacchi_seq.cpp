#include <iostream>
#include <stdio.h>
using std::cout;
using std::cin;

int main(){
int n, a=0, b=1, c=0;
printf("Enter the value of n: ");
cin >> n;
while(c < n){
    c = a+b;
    a = b;
    b = c;
    cout << c << "\t";
}
return 0;
}

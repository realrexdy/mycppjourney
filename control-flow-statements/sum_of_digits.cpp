#include <iostream>
using std::cout;
using std::cin;

int main(){
    int input=0, output=0;
    int digits[20];
    cout << "Enter a number: ";
    cin >> input;
    int i=0;
    int r=0;
    while(input>0){
        r = input%10;
        input /= 10;
        digits[i]=r;
        i++;
        output += r;
    }
    cout << "\nThe sum of all the digits in the number is " << output << "\n";
    return 0;
}

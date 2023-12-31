#include <iostream>
using std::cout;
using std::cin;

int main(){
int original_num=0, reversed_num=0, temp = 0;
cout << "Enter the number:\n";
cin >> original_num;
temp = original_num;
while(original_num>0){
    int  remainder = original_num % 10;
    reversed_num = (reversed_num*10) + remainder;
    original_num = original_num/10;
}
cout << "Reversed Number:\n";
cout << reversed_num;

if(temp==reversed_num){
    cout<<"\nThe number is a palindrome: \n";
}
else{
    cout << "\nThe number is not a plaindrome.\n";
}
return 0;
}

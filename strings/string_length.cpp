#include <iostream>
using std::cout, std::cin;

int strlen(char string[]){
    int length=0;
    while(string[length]!='\0'){
        length++;
    }
    return length;
}

int main(){
    char string[50];
    cout << "Enter a string: ";
    cin >> string;
    cout << "\n The length of the string is " << strlen(string) << "\n";
}
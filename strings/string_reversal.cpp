#include <iostream>
using std::cout, std::cin;

int strlen(char string[]){
    int length=0;
    while(string[length]!='\0'){
        length++;
    }
    return length;
}

void string_reverseal(char string[]){
    char temp[50];
    int length = strlen(string);
    for(int i=0; i<length; i++){
        temp[length-i-1]=string[i];
    }
    for(int i=0; i<length; i++){
        string[i]=temp[i];
    }
}

int main(){
    char string[50];
    cout << "Enter the string: ";
    cin >> string;
    string_reverseal(string);
    cout << "\nReversed string is: " << string;
    return 0;
}
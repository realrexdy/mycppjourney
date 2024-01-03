#include <iostream>
using std::cin, std::cout;

int stringlen(char string[]){
    int length=0;
    while(string[length]!='\0'){
        length++;
    }
    return length;
}

bool strcmp(char string1[], char string2[]){
    bool equal=1;
    int length = (stringlen(string1)>stringlen(string2))?stringlen(string1):stringlen(string2);
    for(int i =0; i<length;i++){
        if(string1[i]!=string2[i]){
            equal = 0;
        }
    }
    return equal;
}

int main(){
    cout << "Enter the first string: ";
    char string1[50];
    cin >> string1;
    cout << "\nEnter the second string: ";
    char string2[50];
    cin >> string2;
    if(strcmp(string1, string2)){
        cout << "\n The two strings are equal.";
    }
    else{
        cout << "\n The two strings are not equal.\n";
    }
    return 0;
}
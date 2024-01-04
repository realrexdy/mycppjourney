#include <iostream>
using std::cin, std::cout;

int strlen(char string[]){
    int length=0;
    while(string[length]!='\0'){
        length++;
    }
    return length;
}

bool strcmp(char string1[], char string2[]){
    bool equal=1;
    int length = (strlen(string1)>strlen(string2))?strlen(string1):strlen(string2);
    for(int i =0; i<length;i++){
        if(string1[i]!=string2[i]){
            equal = 0;
        }
    }
    return equal;
}

void string_reverseal(char string[], char revstring[50]){
    int length = strlen(string);
    for(int i=0; i<length; i++){
        revstring[length-i-1]=string[i];
    }
}

bool string_paldrm_chk(char string[]){
    bool palindrome=1;
    char revstring[50];
    string_reverseal(string, revstring);
    for(int i=0; i < strlen(string); i++){
        if(string[i]!=revstring[i]){
            palindrome = 0;
            break;
        }
    }
    return palindrome;
}

int main(){
    cout << "Enter the string: ";
    char string[50];
    cin >> string;
    if(string_paldrm_chk(string)){
        cout << "The given string is a palindrome.";
    }
    else{
        cout << "\nThe given string is not a palindrome.\n";
    }
    return 0;
}
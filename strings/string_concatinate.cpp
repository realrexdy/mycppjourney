#include <iostream>
using std::cin, std::cout;

int strlen(char string[]){
    int length=0;
    while(string[length]!='\0'){
        length++;
    }
    return length;
}

void strcat(char string1[], char string2[], char string3[]){
    int len1 = strlen(string1), len2 = strlen(string2);
    int i=0;
    for(i; i<len1; i++){
        string3[i]=string1[i];
    }
    for(i; i<len1+len2; i++){
        string3[i]=string2[i-len1];
    }
}

int main(){
    char string1[50];
    cout << "Enter the first string: ";
    cin >> string1;
    char string2[50];
    cout << "\nEnter the second string: ";
    cin >> string2;
    char string3[50];
    strcat(string1, string2, string3);
    cout << "\nThe concatinated string is " << string3 << "\n";
}
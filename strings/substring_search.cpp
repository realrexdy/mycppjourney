#include <iostream>
using std::cout, std::cin;

int strlen(char string[]){
    int length=0;
    while(string[length]!='\0'){
        length++;
    }
    return length;
}

int substringsearch(char string[], char substring[]){
    bool found = 0;
    int length = strlen(substring);
    if( strlen(substring) > strlen(string)){
        cout << "\nSubstring is longer than the main string.\n";
        return -69;
    }
    else{
        for(int i=0; i < strlen(string); i++){
            int j=0;
            if(substring[0]==string[i]){
                for(int k=i; k<i+length; k++){
                    found = 1;
                    if(string[k] != substring[j]){
                        found = 0;
                        break;
                    }
                    j++;
                }
            }
            if(found){
                break;
            }
        }
    }
    return found;
}

int main(){
    cout << "Enter the main string: ";
    char string[50];
    cin >> string;
    cout << "\nEnter the substring: ";
    char substring[50];
    cin >> substring;
    if(substringsearch(string, substring)==-69){}
    else if(substringsearch(string, substring)){
        cout << "\nSub String found in the array.\n";
    }
    else{
        cout << "\nSub String not found in the array.\n";
    }
    return 0;
}
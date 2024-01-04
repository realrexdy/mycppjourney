#include <iostream>

using std::cin, std::cout;

int strlen(char string[]){
    int length=0;
    while(string[length]!='\0'){
        length++;
    }
    return length;
}

void tokenization(char string[]){
    cout << "\nThe tokens are: \n\n";
    for(int i=0; i<strlen(string); i++){
        if(string[i]==' '){
            cout << "\n";
        }
        else{
            cout << string[i];
        }
    }
    cout << "\n";
}

int main(){
    cout << "Type a sentence: ";
    char sentence[100];
    std::cin.getline(sentence,100);
    tokenization(sentence);
    return 0;
}
#include<iostream>
using std::cin, std::cout, std::string;

int main(){
    int *dynarr = new int [10];
    for(int i=0; i<10; i++){
        dynarr[i]=0;
    }
    for(int i=0; i<10; i++){
        cout << dynarr[i];
        cout << "\n";
    }
    cout << "Enter the length of the array:";
    int len;
    cin >> len;
    free(dynarr);
    dynarr = new int [len];
    for(int i=0; i<len; i++){
        dynarr[i]=0;
    }
    for(int i=0; i<len; i++){
        cout << dynarr[i];
        cout << "\n";
    }
    return 0;
}

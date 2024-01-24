#include<iostream>
using std::cin, std::cout;

int main(){
    int n=50;
    for(int i=0; i<n/3; i++){
        if(i<(n/7)){
            cout << "\n";
        }
        else{
            for(int j=0; j<(n/3)-i; j++){
            cout << " ";
        }
        for(int j=0; j<i; j++){
            cout << 0;
        }
        for(int j=i; j>0; j--){
            cout << 0;
        }
        for(int j=0; j<(n/3)-i; j++){
            cout << " ";
        }
        for(int j=0; j<(n/3)-i; j++){
            cout << " ";
        }
        for(int j=0; j<i; j++){
            cout << 0;
        }
        for(int j=i; j>0; j--){
            cout << 0;
        }
        }
        cout << "\n";
    }
    int N = 1.9*n/3;
    for(int i=0; i<n-n/3; i++){
        for(int j=i; j>0; j--){
            cout << " ";
        }
        for(int j=N; j>0; j--){
            cout << 0;
        }for(int j=N; j>0; j--){
            cout << 0;
        }
        N--;
        cout << "\n";
    }
    return 0;
}
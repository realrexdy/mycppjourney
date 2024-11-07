#include <iostream>
int main(){
    int n=15;
    for(int i=0; i<n;i++){
        for(int j=0;j<n-i;j++){
            std::cout << " ";
        }
        if(i==n/2){
            std::cout << "Rexdy was here";
        }
        else{
            for(int j=0; j<2*i; j++){
            std::cout << "*";
        }
        }
        std::cout << "\n";
    }
    return 0;
}
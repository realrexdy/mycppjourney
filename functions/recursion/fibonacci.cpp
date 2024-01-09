#include<iostream>
using std::cin, std::cout;

int fib(int n){
    if(n==0){
        return 1;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fib(n-1)+fib(n-2);
    }
}

int main(){
    cout << "Enter a value of N: ";
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        cout << fib(i) << " ";
    }
return 0;
}

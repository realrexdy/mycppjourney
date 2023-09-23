#include <iostream>
using std::cout;

int a=0;
int b=1;
int x=0;

int main(){
    while(a<100){
       x=a+b;
       a=b;
       b=x;
       cout << x <<"\n" ;
    }
    return 0;
}
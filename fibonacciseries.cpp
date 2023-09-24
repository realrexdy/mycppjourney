/*This is a piece of cpp code to calculate the numbers in Fibonacci Series/*

//Link Section
#include <iostream>
using std::cout;

//Global Declaration
int a=0;
int b=1;
int x=0;

//Main Function
int main(){
    //Sub Program Section
    while(a<100){
       x=a+b;
       a=b;
       b=x;
       cout << x <<"\n" ;
    }
    return 0;
}

/*Cpp code to find the factors of a Number*/

//Link Section
#include <iostream>
using std::cin;
using std::cout;

//Define Section

// Global declaration section
int x=0;
int i=1;

//main function
int main(){
    //Subprogramsection
    cout << "Please enter the number:";
    cin >> x;
    for(i;i<x;i++){
        if(x%i==0){
            cout << i <<"\n";
        }
        else{}
    }
    return 0;
}

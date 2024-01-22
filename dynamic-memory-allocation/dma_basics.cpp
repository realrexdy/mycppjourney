/*My first use of Dynamic Memory allocation in cpp*/

#include<iostream>
using std::cout, std::cin;


int main(){
    //Allocation a memory
    int *num = new int;
    //Init a variable at the allocated variable
    *num = 50;
    cout << *num << "\n";
    //Free the allocated memory
    delete num;
    cout << *num << "\n";
    //Allocating memory for an Array
    int *array = new int[50];
    for(int i=0; i<50; i++){
        array[i]=69;
    }
    for(int i=0; i<50; i++){
        cout << array[i];
    }
    //Deallocating the memory of the array
    delete[] array;
    return 0;
}
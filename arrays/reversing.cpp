#include <iostream>
using std::cout, std::cin;

int reversing(int original_array[], int reversed_array[], int size){
    for(int i=0; i<size; i++){
        reversed_array[i]=original_array[size-i-1];
    }
    return 0;
}

int main(){
    int original_array[50], reversed_array[50], size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "\nEnter the elements of the array: \n";
    for(int i=0; i< size; i++){
        cin >> original_array[i];
    }
    reversing(original_array, reversed_array, size);
    cout << "\nReversed array\n";
    for(int i=0; i< size; i++){
        cout << reversed_array[i] << " ";
    }
}
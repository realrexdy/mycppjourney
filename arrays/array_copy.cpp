#include <iostream>
using std::cin, std::cout;

int array_copy(int a[], int b[], int size){
    for(int i=0; i<size; i++){
        b[i]=a[i];
    }
    return 0;
}

int main(){
    int source_array[50]={0}, target_array[50]={0}, sizea;
    cout << "Enter the number elements in the array: ";
    cin >> sizea;
    cout << "Enter the elements of the array:\n";
    for(int i=0; i<sizea;i++){
        cin >> source_array[i];
    }
    array_copy(source_array, target_array, sizea);
    cout << "\nSource array has been successfully copied to the target array.\n";
    for(int i=0; i<sizea;i++){
        cout << target_array[i] << " ";
    }
}
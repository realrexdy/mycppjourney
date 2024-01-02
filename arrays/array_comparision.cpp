#include <iostream>
using std::cin, std::cout;

bool arraycompare(int a[], int b[], int size){
    bool Z=true;
    for(int i=0; i<size; i++){
        if(a[i]!=b[i]){
            Z=false;
            break;
        }
    }
    return Z;
}

int main(){
    int a[50]={0}, b[50]={0}, sizea;
    cout << "Enter the number elements in the array: ";
    cin >> sizea;
    cout << "Enter the elements of the first array:\n";
    for(int i=0; i<sizea;i++){
        cin >> a[i];
    }
    cout << "Enter the elements of the second array:\n";
    for(int i=0; i<sizea;i++){
        cin >> b[i];
    }
    if(arraycompare(a,b,sizea)){
        cout << "\nThe two strings are equal.\n";
    }
    else{
        cout << "\nThe two strings are not equal.\n";
    }
}
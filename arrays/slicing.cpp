#include <iostream>
using std::cin, std::cout;

int slice(int a[], int b[], int startind, int endind){
    startind--;
    for(int i=startind; i<endind; i++){
        b[i-startind]=a[i];
    }
    return 0;
}

int main(){
    int a[50], b[50], sizea, startind=0, endind=0;
    cout << "Enter the number of elements in the array; ";
    cin >> sizea;
    cout << "\n Enter the array elements: \n";
    for(int i=0; i<sizea; i++){
        cin >> a[i];
    }
    cout << "\nEnter the starting point of the new array: ";
    cin >> startind;
    cout << "\nEnter the ending point of the new array: ";
    cin >> endind;
    if(endind<startind){
        cout << "\nInvalid ending point\n";
    }
    else{
        slice(a, b, startind, endind);
    cout << "New Sliced array: \n";
    for(int i=0; i<endind-startind+1; i++){
        cout << b[i] << " ";
    }
    cout << "\n";
    }
}
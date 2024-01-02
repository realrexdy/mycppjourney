#include <iostream>
using std::cin, std::cout;

int merge(int a[], int b[], int c[], int sizea, int sizeb){
    for(int i=0; i<sizea; i++){
        c[i]=a[i];
    }
    for(int i=sizea; i<sizea+sizeb; i++){
        c[i] = b[i-sizea];
    }
    return 0;
}

int main(){
    int a[50], b[50], c[50];
    int sizea, sizeb;
    cout << "Enter the number of elements in the first array: ";
    cin >> sizea;
    cout << "\nEnter the elements of the array: \n";
    for(int i=0; i<sizea; i++){
        cin >> a[i];
    }
    cout << "\nEnter the number of elements in the second array: ";
    cin >> sizeb;
    cout << "\nEnter the elements of the array: \n";
    for(int i=0; i<sizea; i++){
        cin >> b[i];
    }
    merge(a,b,c, sizea, sizeb);
    cout << "Merged array is \n";
    for(int i=0; i<sizea+sizeb; i++){
        cout << c[i] << " ";
    }
}
#include <iostream>
using std::cin, std::cout;

int del(int a[], int position, int *n){
    for(int i=position; i <= *n; i++){
        a[i]=a[i+1];
    }
    (*n)--;
    return 0;
}

int main(){
    int a[50]={0}, element, position, n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "\n";
    cout << "Enter the elements:\n";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << "\nEnter the position of the element you want to delete: ";
    cin >> position;
    position--;
    cout << "\n";
    if(position < 0 || position >= n){
        (position<0)?cout << "\nInvalid Position\n":cout << "\nOut of Bound\n";
    }
    else{
        del(a, position, &n);
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
    }
    cout <<"\n";
    return 0;
}
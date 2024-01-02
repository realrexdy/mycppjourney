#include <iostream>
using std::cin, std::cout;

int updt(int a[], int element, int position){
    a[position] = element;
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
    cout << "\nEnter the position of the element you want to update: ";
    cin >> position;
    cout << "\nEnter the updated value: ";
    cin >> element;
    position--;
    if(position < 0 || position >= n){
        (position<0)?cout << "\nInvalid Position\n":cout << "\nOut of Bound\n";
    }
    else{
        updt(a, element, position);
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
    }
    cout <<"\n";
    return 0;
}
#include <iostream>
using std::cin, std::cout;

int insert(int a[], int element, int position, int *n){
    for(int i=*n; i>=position; i--){
        a[i+1]=a[i];
    }
    a[position]=element;
    (*n)++;
    return 0;
}

int main(){
    int a[50], element, position, n;
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
    cout << "\nEnter the element that you want to insert: ";
    cin >> element;
    cout << "\nEnter the position you want to insert the element: ";
    cin >> position;
    position--;
    if(position < 0 || position >= n){
        (position<0)?cout << "\nInvalid Position\n":cout << "\nOut of Bound\n";
    }
    else{
        insert(a, element, position, &n);
        for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }
    }
    return 0;
}
#include <iostream>
using std::cout, std::cin;

int bubsor(int a[], int *n){
    for(int i=0; i < *n-1; i++){
        for(int j=0; j < *n-i-1; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    return 0;
}

int main(){
    int a[50]={0}, key, n;
    cout << "Enter the number of elements in the Array:";
    cin >> n;
    cout << "\nEnter the elements of the Row: \n";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int *pN = &n;
    bubsor(a, pN);
    cout << "\nSorted Array\n";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}
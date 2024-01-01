#include <iostream>
using std::cout, std::cin;

int linser(int a[], int key, int *n){
    int ind = -1;
    for(int i=0; i<*n; i++){
        if(key == a[i]){
            ind = i;
            break;
        }
    }
    return ind;
}

int main(){
    int a[50]={0}, key, n;
    cout << "Enter the number of elements in the Row:";
    cin >> n;
    cout << "\nEnter the elements of the Row: \n";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Enter the key element that you want to search: ";
    cin >> key;
    int *pN = &n;
    int keyind = linser(a, key, pN)+1;
    if( keyind == 0){
        cout << "\nKey not found in the array.\n";
    }
    else{
        cout << "The key element " << key << " is found at " << keyind << "th position of the array.";
    }
    return 0;
}
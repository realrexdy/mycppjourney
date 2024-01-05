#include <iostream>
using std::cin, std::cout;

int binary_search(int array[], int key, int left, int right){
    int mid = (left+right)/2;
    if(array[mid]==key){
        return mid+1;
    }
    else if(array[mid]>key){
        return binary_search(array, key, left, mid-1);
    }
    else if(array[mid]<key){
        return binary_search(array, key, mid+1, right);
    }
    else{
        return -1;
    }
}

int main(){
    int a[10];
    cout << "Enter the number of elements:";
    int n;
    cin >> n;
    cout << "\nEnter the array elements:";
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << "Enter the key elment; ";
    int key;
    cin >> key;
    cout << "\n Key element " << key << " found at " << binary_search(a,key, 0,n);
    return 0;
}
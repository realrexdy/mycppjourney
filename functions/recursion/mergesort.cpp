#include <iostream>

void mergesort(int array[], int left, int right){
    int mid = mid + ((right-mid)/2);
    int left[mid], right[mid];
    for(int i=0; i < mid; i++){
        left[i]=array[i];
    }
    for(int i=0; i < mid; i++){
        right[i]=array[mid+i];
    }
}
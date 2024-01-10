#include <iostream>
#include <vector>
using std::cin, std::cout, std::vector;

int main(){
cout << "Enter a integer:";
int x;
cin >> x;
cout << "The integer that you entered " << x << " is stored in the memory location: \n\t" << &x <<"\n";
int *pX=&x;
cout << "\t" << pX << "\n This is the value that pointer is holding, which is same as the address shown before.";
cout << "\n Now, enter a list of 5 numbers:\n";
int numbers[5];
for(int i=0; i<5; i++){
    cin >> numbers[i];
}
cout << "This is the list of numbers with their locations:\n";
for(int i=0; i<5; i++){
    cout << "\t" << numbers[i];
    cout << "     " << &numbers[i] << "\n";
}
cout << "\nIf you look closely, you can notice a pattern in the addressses. It's because an integer occupies 4 bytes of memory, the list of numbers are stored in contiguous memory location one after the other, this type of data is called.\n";
return 0;
}

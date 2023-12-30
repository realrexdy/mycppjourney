#include <iostream>
using std::cout;
using std::cin;

int main(){
int num=0;
bool prime=1;
cout << "Enter a Number: ";
cin >> num;
for(int i=2; i<num; i++){
    if(num%i==0){
        prime = 0;
    }
}
if(prime==0){
    cout << num << " is not a prime number.\n";
}
else{
    cout << num << " is a prime number.\n";
}
return 0;
}

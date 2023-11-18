#include <iostream>
using std::cout;
using std::cin;

int main(){
int inp, i;
bool nprm = false;
cout << "Enter any number:\n";
cin >> inp;

if(inp>2){
for(i=2;i<inp;i++){
if(inp%i==0){
nprm = true;
}
}
if(nprm == true){cout << inp << " is NOT a Prime Number.\n";}
else{cout << inp << " is a Prime Number\n";}
}

else if(inp == 2 || inp == 1){
cout << inp << " is a Prime Number\n";
}

else{
cout<<"Please enter a non zero positive number.\n";
}
return 0;
}

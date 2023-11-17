#include <iostream>
using std::cout;

int main(){

int i,j,n;
n=10;

for(i=1; i<n; i++){
for(j=n-i;j>0;j--){
cout << " ";
}
for(j=1; j<i; j++){
cout << j;
}
for(j;j>0;j--){
cout << j;
}
cout << "\n";
}


return 0;
}

#include <iostream>
using std::cout;

int main(){
int x;
for(x=0;x<100;x++){
if(x%3==0){
cout<<"Fizz"<<"\n";
}
else if(x%5==0){
cout<<"Buzz"<<"\n";
}
else{
cout<<x<<"\n";
}
}
system("pause");
return 0;
}
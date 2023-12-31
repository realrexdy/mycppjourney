#include <iostream>
using std::cout;
using std::cin;

int main(){
double input_num=0, factorial=1;
cout<<"Enter the number: ";
cin>>input_num;
for(int i=input_num; i>0; i--){
    factorial *= i;
}
printf("%.0lf! = %.0lf", input_num, factorial);
return 0;
}

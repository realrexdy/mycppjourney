#include <iostream>
using std::cout;
using std::cin;

int main(){
double input_num=0, power=0, powered_num=1;
cout<<"Enter the number: ";
cin>>input_num;
cout<<"Enter the power: ";
cin>>power;
if(power==0){
    cout << input_num << " raised to the power " << power << " is " << 1 << "\n";
}
else if(power<0){
    powered_num = 1;
    for(int i=0; i>power; i--){
        powered_num/=input_num;
    }
    cout << input_num << " raised to the power " << power << " is ";
    printf("%lf\n", powered_num);
}
else{
    powered_num = input_num;
    for(int i=0; i<power-1; i++){
        powered_num*=input_num;
    }
    cout << input_num << " raised to the power " << power << " is ";
    printf("%lf\n", powered_num);
}
return 0;
}

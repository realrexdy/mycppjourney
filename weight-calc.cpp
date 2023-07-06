#include <iostream>
using std::cout;
using std::cin;

int main(){
    cout << "In the vast cosmic realm, our solar system takes the helm." << "\n";
    cout << "Please enter your weight on Earth: ";
    double ew;
    cin >> ew;
    cout << "Please select the celestial body on which you want to calculate your weight:\n";
    cout << "1. Mercury\n";
    cout << "2. Venus\n";
    cout << "3. Sun\n";
    cout << "4. Mars\n";
    cout << "5. Jupiter\n";
    cout << "6. Saturn\n";
    cout << "7. Uranus\n";
    cout << "8. Neptune\n";
int res;
cin >> res;
if(res<9 && res>0){
    if(res==1){
    cout << ew*0.38 <<"\n";
}
else if(res==2){
    cout << ew*0.91 <<"\n";
}
else if(res==3){
    cout << ew*27.9 <<"\n";
}
else if(res==4){
    cout << ew*0.38 <<"\n";
}
else if(res==5){
    cout << ew*2.54 <<"\n";
}
else if(res==6){
    cout << ew*1.07 <<"\n";
}
else if(res==7){
    cout << ew*0.89 <<"\n";
}
else if(res==8){
    cout << ew*1.13 <<"\n";
}
else{
}
}
else{
    cout << "Invalid Response\n";
}
}

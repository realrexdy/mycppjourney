#include <iostream>
using std::cout;
using std::cin;

int main(){
    int day=0;
    cout << "Enter the number of the day:";
    cin >> day;
    if(day>-1 && day<7){
        switch (day){
        case 0:{
            cout << "Sunday\n";
        }break;
        case 1:{
            cout << "Monday\n";
        }break;
        case 2:{
            cout << "Tuesday\n";
        }break;
        case 3:{
            cout << "Wednsday\n";
        }break;
        case 4:{
            cout << "Thursday\n";
        }break;
        case 5:{
            cout << "Friday\n";
        }break;
        case 6:{
            cout << "Saturday\n";
        }break;
    }
    }
    else{
        cout << "Invalid Day of the Week\n";
    }
    return 0;
}

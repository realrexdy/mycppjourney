#include <iostream>
#include <iomanip>

using std::cin, std::cout, std::setw, std::setfill;

void c24_12(int hrs, int mins){
    if(hrs > 24 || mins > 60 || hrs < 0 || mins <0){
        cout << "\n Invalid time \n";
    }
    else if(hrs == 00){
        cout << 12 << ":" << setw(2) << setfill('0') <<  mins << "AM\n";
    }
    else if(hrs == 12){
        cout << 12 << ":" << setw(2) << setfill('0') <<  mins << "PM\n";
    }
    else{
        hrs = (hrs > 12) ? hrs-12 : hrs;
        const char *meridia = (hrs > 12) ? "PM" : "AM";
        cout << setw(2) << setfill('0') << hrs << ":" << setw(2) << setfill('0') <<  mins << meridia << "\n";
    }
}

int main(){
    int hrs, mins;
    cout << "Enter the hours: ";
    cin >> hrs;
    cout << "\n Enter the minutess: ";
    cin >> mins;
    c24_12(hrs, mins);
    return 0;
}
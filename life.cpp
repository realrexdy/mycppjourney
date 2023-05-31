#include <iostream>
using std::cout;
using std::cin;
int main() {
    bool love_your_work;
    cout<<"Love what you do and it feels like play to you?"<<"\n";
    cout<<"1 is yes and 0 is no."<<"\n";
    cin>>love_your_work;
    if (love_your_work==true){
        cout<<"Happy life."<<"\n";
    }
    else{
        cout<<"Oh fcuk, what a  miserable life?"<<"\n";
    }
    return 0;
}

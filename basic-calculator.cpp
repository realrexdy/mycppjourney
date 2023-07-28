#include <iostream>
using std::cout;
using std::cin;
int main(){
    int oper;
    cout << "G-69 Calculator" << "\n";
    cout << "What kind of operation do you want to perform?\n";
    cout << "1. Addition\n"<<"2.Substraction\n"<<"3.Multiplication\n"<<"4. Division\n";
    cin >> oper;
    while(oper!=1&&oper!=2&&oper!=3&&oper!=4){
        cout << "Invalid operation.\n";
        cout << "Please select a valid operation to perform.\n";
        cin >> oper;
    }
    double x;
    double y;
    if (oper == 1){
        cout << "Please enter the first number:\n";
        cin>>x;
        cout << "Please enter the second number:\n";
        cin>>y;
        cout << "The answer is:";
        cout << x+y;
    }
    else if(oper == 2){
        cout << "Please enter the first number:\n";
        cin>>x;
        cout << "Please enter the second number:\n";
        cin>>y;
        cout << "The answer is:";
        cout << x-y;
    }
    else if(oper == 3){
        cout << "Please enter the first number:\n";
        cin>>x;
        cout << "Please enter the second number:\n";
        cin>>y;
        cout << "The answer is:";
        cout << x*y;
    }
    else if(oper == 4){
        cout << "Please enter the first number:\n";
        cin>>x;
        cout << "Please enter the second number:\n";
        cin>>y;
        cout << "The answer is:";
        cout << x/y;
    }
    cin.get();
    return 0;
}

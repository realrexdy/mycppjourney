// Program to swap variables using a temporary variable

#include <iostream>
using std::cin;
using std::cout;

int main(){
    float a,b,temp;
    float input;
    
    cout << "How do you want to swap your variables?\n";
    cout << "1.Temporary Variable\n2.Using Addition\n3.Using Division\n\n";
    cin >> input;
    if(input == 1){
    cout << "\n";
    cout << "Using Temporary Variable1\n";
    cout << "Please enter the first variable:";
    cin >> a;
    cout << "Please enter the second variable:";
    cin >> b;

    temp =a;
    a=b;
    b=temp;
    cout << "Variable 1: ";
    cout << a << "\n";
    cout << "Variable 2: ";
    cout << b << "\n";
    }
    if(input==2){
    cout << "\n";
    cout << "Using Addition\n";
    cout << "Please enter the first variable:";
    cin >> a;
    cout << "Please enter the second variable:";
    cin >> b;

    a=a+b;
    b=a-b;
    a=a-b;
    cout << "Variable 1: ";
    cout << a << "\n";
    cout << "Variable 2: ";
    cout << b << "\n";
    }
    if(input==3){
    cout << "\n";
    cout << "Using Division\n";
    cout << "Please enter the first variable:";
    cin >> a;
    cout << "Please enter the second variable:";
    cin >> b;

    a=a/b;
    b=a*b;
    a=b/a;
    cout << "Variable 1: ";
    cout << a << "\n";
    cout << "Variable 2: ";
    cout << b << "\n";
    }

    else{cout << "\nPlease enter a valid responce\n";}

    return 0;
}

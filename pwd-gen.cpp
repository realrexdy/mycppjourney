#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using std::cin;
using std::cout;
using std::string;

string pwdgen(int length){
    string pwd;
    string charset="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*()_+";
    srand(time(0));
    for(int i=0; i<length;i++){
        int index = rand()%charset.length();
        pwd+=charset[index];
    }
    return pwd;
}

int main(){
    int length;
    cout<<"How long do you want the password to be?"<<"\n";
    cin>>length;
    string pwd=pwdgen(length);
    cout << "Here is a random password of "<<length<<" charecters long:" << pwd;
    return 0;
}

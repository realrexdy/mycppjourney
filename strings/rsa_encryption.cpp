#include<iostream>
#include<string>
using std::cout, std::cin, std::string;

int gret2(int p, int q){
    if(p>=q){
        return p;
    }
    else{
        return q;
    }
}

int flcm(int p, int q){
    int lcm=1, least = (gret2(p,q)==p)?q:p;
    for(int i=2; i<least; i++){
        if(p%i==0 && q%i == 0){
            lcm = i;
            break;
        }
    }
    return lcm;
}

int myPow(int x, unsigned int p)
{
  if (p == 0) return 1;
  if (p == 1) return x;
  
  int tmp = myPow(x, p/2);
  if (p%2 == 0) return tmp * tmp;
  else return x * tmp * tmp;
}

int expt(int tof){
    int expt = 1;
    for(int i=2; i<tof; i++){
        if(flcm(tof, i)==1){
            expt = i;
        }
    }
    return expt;
}

int main(){
    cout << "Enter the value of p:";
    int p;
    cin >> p;
    cout << "Enter the value of q:";
    int q;
    cin >> q;
    int n = p*q;
    int tof = (p-1)*(q-1);
    int e = expt(tof);
    cout << "Enter the message text:";
    string message;
    cin >> message;
    size_t length = sizeof(message);
    string cipher;
    for (size_t i = 0; i < length; i++) {
        char encryptedChar = static_cast<char>(myPow(static_cast<int>(message[i]), e) % n);
        cipher.push_back(encryptedChar);
    }
    cout << "The Cipher text is:";
    cout << cipher;
    return 0;
}
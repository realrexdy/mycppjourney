#include<iostream>
using std::cin, std::cout;

class node{
    public:
    int data;
    int *nextnode;
};

int main(){
    //Insertition
    for(int i=0; i<10; i++){
        int temp;
        cin >> temp;
        node[i].data = temp;
        node[i-1].nextnode = &node[i].data;
    }
    return 0;
}
#include <iostream>

class Node{
    public:
    int Data;
    Node* NextNode;

    Node(int Value){
        Data = Value;
        NextNode = nullptr;
    }
};

void PushToTop(Node*& TopNode, int Data){
    Node* SecondNode = TopNode;
    TopNode = new Node(Data);
    TopNode->NextNode = SecondNode;
}

int PopTheTop(Node*& TopNode){
    Node* SecondNode = TopNode->NextNode;
    int Data = TopNode->Data;
    delete TopNode;
    TopNode = SecondNode;
    return Data;
}

void TraverseStack(Node*& TopNode){
    Node* Current = TopNode;
    while(Current != nullptr){
        std::cout << Current->Data << " ";
        Current = Current->NextNode;
    }
}

void FreeStack(Node*& TopNode){
    Node* Current = TopNode;
    while(Current != nullptr){
        Node* NextNode = Current->NextNode;
        delete Current;
        Current = NextNode;
    }
}

int main(){
    Node* Stack1 = nullptr;
    int n = 0;
    std::cout << "Numeber of elements you want to enter:";
    std::cin >> n;
    std::cout << "\nEnter the elements:";
    for(int i=0; i<n; i++){
        int temp;
        std::cin >> temp;
        PushToTop(Stack1, temp);
    }
    std::cout << "\n";
    TraverseStack(Stack1);
    FreeStack(Stack1);
    return 0;
}

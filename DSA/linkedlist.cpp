#include <iostream>

class node{
public:
    int data;
    node* next = nullptr;

    node(int value){
        data = value;
    }
};

namespace sll{
    void length(node* head){
    node* current = head;
    int size = 0;
    while(current != nullptr){
        size++;
        current = current->next;
    }
}

    void insertAtEnd(node* head, int value){
        while(head->next != nullptr){
            head = head->next;
        }
        if(head->next==nullptr){
            node* endNode = new node(value);
            head->next = endNode;
        }
    }

    void traverse(node* head){
        while(head != nullptr){
            std::cout << head->data << ", ";
            head = head->next;
        }
    }

    void freeSLL(node* head){
        node* temp = head;
        node* next;
        while(temp != nullptr){
            next = temp->next;
            delete temp;
            temp = next;
        }
    }

}

int main(){
    int n;
    std::cout << "Enter the number of Nodes: " << "\n";
    std::cin >> n;
    std::cout << "Enter the elements: \n";
    node* head = nullptr;
    for(int i=0; i<n; i++){
        int temp;
        std::cin >> temp;
        if(head == nullptr){
            head = new node(temp);
            continue;
        }
        sll::insertAtEnd(head, temp);
    }
    sll::traverse(head);

    sll::freeSLL(head);

    return 0;
}
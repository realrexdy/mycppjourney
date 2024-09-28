#include <iostream>
using std::cin, std::cout;

#define MAX 32

typedef struct{
    int arr[MAX];
    int top = -1;
} stack;

void push(stack* tempstack, int value){
    if(tempstack->top >= MAX){
        cout << "Stack is Full";
        exit(0);
    }
    tempstack->top++;
    tempstack->arr[tempstack->top] = value;
}

int pop(stack* tempstack){
    if(tempstack->top <= 0){
        cout << "Stack is Empty";
        exit(0);
    }
    int topele = tempstack->arr[tempstack->top];
    tempstack->top--;
    return topele;
}

int peek(stack tempstack){
    return tempstack.arr[tempstack.top];
}

int main(){
    // I am just testing here
    stack MyStack;
    push(&MyStack, 8);
    cout << peek(MyStack) << "\n";
    push(&MyStack, 69);
    push(&MyStack, 420);
    push(&MyStack, 108);
    cout << pop(&MyStack) << "\n";
    cout << pop(&MyStack) << "\n";
    cout << pop(&MyStack) << "\n";
    cout << pop(&MyStack) << "\n";
    return 0;
}
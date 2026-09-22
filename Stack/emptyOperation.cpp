#include<iostream>
using namespace std;

//creating a stack using a array
int stack[6];
int top = -1; // so that if the stack us empty then we can check through this

//creating the push operation -> used to add the item to the stack;
void push(int value){
    if(top == 5){
        cout<<"Stack overflow"<<endl;
    }
    else{
        top++;
        stack[top] = value;
    }
}

//checks if the stack is empty or not
bool isEmpty(){
    if(top == 5){
        return false;
    }
    else{
        return true;
    }
}
void display(){
    cout<<"Stack: ";
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}

int main(){
    push(101);
    push(102);
    push(103);
    push(104);
    push(105);
    push(106);
    if(isEmpty){
        cout<<"Stack is full"<<endl;
    }
    else{
        cout<<"Stack is not full"<<endl;
    }

}
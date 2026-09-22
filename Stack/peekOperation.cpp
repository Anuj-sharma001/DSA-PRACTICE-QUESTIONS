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

void peek(){
    cout<<"Peek Operation: ";
    cout<<stack[top]<<endl;;
}

void display(){
    cout<<"Stack: ";
    for(int i=top;i>=0;i--){
        cout<<stack[i]<<" ";
    }
    cout<<endl;
}


int main(){
    //calling functions
    push(101);
    push(102);
    push(103);
    push(104);
    push(105);
    display();
    
}
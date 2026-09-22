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

//creating the pop operation -> pop will do the return and delete the data

int pop(){
    if(top == -1){
        cout<<"Stack underflow"<<endl;
        return 0;
    }
    else{
        int item = stack[top];
        top--;
        return item;
    }
}

//used to display the stack
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
    cout<<"After Pop: ";
    cout<<pop()<<endl;
    display();
}
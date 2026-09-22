#include<iostream>
using namespace std;

//creating a stack using a array
int stack[6];
int top = -1; // so that if the stack us empty then we can check through this

//checks if the stack is full or not
bool isFull(){
    if(top == 6){
        return true;
    }
    else{
        return false;
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
    if(isFull){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
}
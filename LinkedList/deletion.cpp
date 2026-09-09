#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
};

int main(){
    Node *head = new Node();
    Node *B = new Node();
    Node *C = new Node();
    Node *D = new Node();
    Node *E = new Node();

    head->data = 10;
    B->data = 20;
    C->data = 30;
    D->data = 40;
    E->data = 50;

    head->next = B;
    B->next = C;
    C->next = D;
    D->next = E;
    E->next = NULL;

    Node *temp = new Node(); 

    //deleting first element 
    temp = head;
    head = head->next;
    delete temp;
    temp = head;
    
    cout<<"Deleting first element: ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
    
    //deleting last element
    temp = head;
    while(temp->next->next!= NULL){
        temp = temp->next;
    }
    
    delete temp->next;
    temp->next = NULL;
    
    cout<<"Deleting last element: ";
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
    
    //deleting the element at the particular position eg 2 pos;
    temp = head;
    int pos = 2;
    for(int i=1;i<pos-1;i++){
        temp = temp->next;
    }
    Node *key = temp->next;
    temp->next = key->next;
    delete key;

    cout<<"Deleting at the 2nd index: ";
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
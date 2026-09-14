#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

int main(){
    Node *header = new Node();
    Node *A = new Node();
    Node *B = new Node();
    Node *C = new Node();

    A->data = 10;
    B->data = 20;
    C->data = 30;

    header->next = A;
    A->next = B;
    B->next = C;
    C->next = NULL;

    //print the header Linked list
    cout<<"Header Linked list : ";
    Node *temp = header;
    while(temp->next!=NULL){
        temp = temp->next;
        cout<<temp->data<<" ";
    }
    cout<<endl;
    //insertion at the ending is same;
    
    //insertion at the begining
    Node *D = new Node();
    D->data = 40;
    
    D->next = header->next;
    header->next = D;

    cout<<"After insertion at the begining : ";
    temp = header;
    while(temp->next!=NULL){
        temp = temp->next;
        cout<<temp->data<<" ";
    }
    cout<<endl;
    
    
    //deletion at the ending is same;
    
    //deletion at the begining
    temp = header->next;
    header->next = temp->next;
    delete temp;
    cout<<"After deletion at the begining : ";
    temp = header;
    while(temp->next!=NULL){
        temp = temp->next;
        cout<<temp->data<<" ";
    }
    cout<<endl;




    
}
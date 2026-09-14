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
    C->next = header; // Making it circular

    //print the circular header Linked list
    cout<<"Circular Header Linked list : ";
    Node *temp = header;
    while(temp->next != header){
        temp = temp->next;
        cout<<temp->data<<" ";
    }

    cout<<endl;

    //check if the linklist is empty or not then header->next will point to header;
    if(header->next == header){
        cout<<"The list is empty."<<endl;
    }
    else{
        cout<<"The list is not empty."<<endl;
    }


    //insertion at the ending ;
    Node *D = new Node();
    D->data = 40;
    temp = header;
    while(temp->next != header){
        temp = temp->next;
    }
    
    D->next = header;
    temp->next = D;

    cout<<"After insertion at the ending : ";
    temp = header;
    while(temp->next != header){
        temp = temp->next;
        cout<<temp->data<<" ";
    }
    cout<<endl;


    //deletion at the ending ;
    temp = header;
    while(temp->next->next!= header){
        temp = temp->next;
    }

    Node *key = temp;
    temp->next = temp->next->next;
    delete key->next;
    cout<<"After deletion at the ending : ";
    temp = header;
    while(temp->next != header){
        temp = temp->next;
        cout<<temp->data<<" ";
    }



}
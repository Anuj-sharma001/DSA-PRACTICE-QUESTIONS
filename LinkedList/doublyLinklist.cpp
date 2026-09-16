#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;   //stores the previous data 
};

int main(){
    Node *head = new Node();
    Node *A = new Node();
    Node *B = new Node();
    Node *C = new Node();

    head->data = 0; //head node data is 0
    A->data = 10;
    B->data = 20;
    C->data = 30;

    head->next = A;
    head->prev = NULL;
    
    A->next = B;
    A->prev = head;

    B->next = C;
    B->prev = A;

    C->next = NULL;
    C->prev = B;


    //print the doubly linked list forward
    cout<<"Doubly Linked list forward : ";
    Node *temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //print the doubly linked list backward

    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }

    cout<<"Doubly Linked list backward : ";
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
    cout<<endl;

    //INSERTION AT THE BEGINNING OF THE DOUBLY LINKLIST
    Node *newNode = new Node();
    newNode->data = 5;
    head->prev = newNode;
    newNode->next = head;
    newNode->prev = NULL;
    head = newNode;

    temp = head;
    cout<<"INSERTION AT THE BEGINNING OF THE DOUBLY LINKLIST: ";
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
    //INSERTION AT THE ENDING OF THE DOUBLY LINKLIST
    Node *n1 = new Node();
    n1->data = 50;
    n1->next = NULL;

    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n1;
    n1->prev = temp;

    temp = head;
    cout<<"INSERTION AT THE ENDING OF THE DOUBLY LINKLIST: ";
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

    //INSERTION AT THE PARTICULAR POSITION IN THE DOUBLY LINKLIST
    int pos = 3;
    temp = head;
    for(int i=1;i<pos-1 && temp != NULL;i++){
        temp = temp->next;
    }

    Node *n2 = new Node();
    n2->data = 100;
    temp->next->prev = n2;
    n2->next = temp->next;
    temp->next = n2;
    n2->prev = temp;

    cout<<"INSERTION AT THE PARTICULAR POSITION 3 IN THE DOUBLY LINKLIST: ";
    temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;

}
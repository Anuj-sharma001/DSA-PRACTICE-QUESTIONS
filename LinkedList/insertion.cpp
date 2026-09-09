// You are using GCC
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *next;
};

int main(){
    Node *head = new Node();
    Node *A = new Node();
    Node *B = new Node();
    
    head->data = 10;
    A->data = 20;
    B->data = 30;
    
    head->next = A;
    A->next = B;
    B->next = NULL;
    
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
    cout<<"Insertion at the begining : ";
    
    
    //insertion at the begining
    Node *C = new Node();
    C->data = 40;
    C->next = head;
    
    head = C;
    temp = head;
    
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    cout<<endl;
    
    
    //stopping at the ending node or node before NULL    
    temp = head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
   
    cout<<"Last element : ";
    cout<<temp->data;
    cout<<endl;
    
    //print te second last element before NULL
    temp = head;
    while(temp -> next -> next != NULL){
        temp= temp->next;
    }
    
    cout<<"Last second element : ";
    cout<<temp->data;
    cout<<endl;
    
    
    // printing alternative element
    // temp = head;
    // while(temp!= NULL){
    //     if(temp->next->next ==NULL){
    //         break;
    //     }
    //     cout<<temp->data<<" ";
    //     temp = temp->next;
    // }
    
    
    //inserting the value to the last node
    Node *E = new Node();
    E->data = 50;
    E->next = NULL;
    
    temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    
    temp->next = E;
    
    cout<<"Insertion at the ending: ";
    temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    
    cout<<endl;
    
    //Insertion at particular position
    
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
    
    
}
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

    head->data = 10;
    B->data = 20;
    C->data = 30;

    head->next = B;
    B->next = C;
    C->next = NULL;
 
}
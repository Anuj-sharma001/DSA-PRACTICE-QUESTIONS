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
    Node *F = new Node();
    Node *G = new Node();
    Node *H = new Node();

    head->data = 10;
    B->data = 20;
    C->data = 30;
    D->data = 40;
    E->data = 50;
    F->data = 60;
    G->data = 70;
    H->data = 80;

    head->next = B;
    B->next = C;
    C->next = D;
    D->next = E;
    E->next = F;
    F->next = G;
    G->next = H;
    H->next = NULL;

    Node *temp = head;
    int average;
    int sum = 0;
    int count = 0;
    while(temp != NULL){
        sum = sum+temp->data;
        temp = temp->next;
        count++;
    }

    average = sum/count;

    cout<<"Average :"<<average<<endl;

}
#include<iostream>
using namespace std;

int main(){
    int arr[100] = {10,20,30,40,50};
    int size = 5;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    // insertion at beginning :: insert = 0
    cout<<"insertion at beginning :: insert = 0"<<endl;
    for(int i=size; i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = 0;
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    size++;
    cout<<endl;

    // insertion at the end:: insert = 60
    cout<<"insertion at the end:: insert = 60"<<endl;
    arr[size] = 60;
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }
    size++;
    cout<<endl;

    //insertion at the index 3 value = 100
    cout<<"insertion at the index 3 value = 100"<<endl;
    for(int i=size;i>3;i--){
        arr[i] = arr[i-1];
    }
    arr[3] = 100;
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
    size++;
}
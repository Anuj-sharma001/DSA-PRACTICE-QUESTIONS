#include<iostream>
using namespace std;

int main(){
    int arr[5] = {12,35,67,42,90};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }

    int key;
    cout<<endl;
    cout<<"Enter the key value :";
    cin>>key;
    bool flag = false;

    for(int i=0;i<5;i++){
        if(arr[i] == key){
            for(int j=i ; j<5;j++){
                arr[j] = arr[j+1];
            }
            flag=true;
            break;
        }
    }

    if(flag){
        cout<<"KeY FOUND ";
        for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    }
    else{
        cout<<"Key not found";
    }
    
    return 0;
}
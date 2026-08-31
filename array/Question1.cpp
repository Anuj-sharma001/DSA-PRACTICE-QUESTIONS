//Take the two input from the user x and y and search the x in the array if x is found then
//add the  y next index of the x and if x is not found add the elemnet at the end of the array

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int arr[100] = {10,20,30,40,50,60,70,80,90};
    int size = 9;
    cout<<"Enter the X value: "<<endl;
    int x;
    cin>>x;
    cout<<"Enter the Y value: "<<endl;
    int y;
    cin>>y;
    bool flag = false;

    for(int i=0;i<size;i++){
        if(arr[i] == x){
            for(int j=size;j>i;j--){
                arr[j] = arr[j-1];
            }
        arr[i+1] = y; 
        flag = true;
        size++;
        break;
        }
    }
    

    if(flag){
        cout<<"Sucessfully done!"<<endl;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        arr[size] = y;
        size++;
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }

}
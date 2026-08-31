#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    int key;
    cout<<"Enter the key value :";
    cin>>key;

    int beg = 0;
    int end = n-1;
    int mid;

    while(beg<=end){
        mid = (beg + end)/2;
        if(key == arr[mid]){
            cout<<"Element Found at index"<<mid;
            return 0;
        }
        else if(key>arr[mid]){
            beg = mid + 1;
        }
        else{
            end = mid-1;
        }
    }
    cout<<"Element not found"<<endl;
}
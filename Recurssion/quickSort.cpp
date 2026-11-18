#include<iostream>
using namespace std;


int partition(int arr[] , int beg , int end){
    int i = beg-1;
    int j = beg;
    int pivot = arr[end];

    while(j<end){
        if(arr[j]<=pivot){
            i++;
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
        j++;
    }

    i++;
    int temp = arr[i];
    arr[i] = pivot;
    pivot = temp;

    return i;
}
void quickSort(int arr[] , int beg , int end){
    if(beg<end){
        int pivot = partition(arr , beg , end);
        quickSort(arr,beg,pivot-1);
        quickSort(arr,pivot+1,end);
    }
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    quickSort(arr,0,n-1);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
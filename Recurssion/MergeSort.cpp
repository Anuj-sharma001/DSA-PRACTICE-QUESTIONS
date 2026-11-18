#include<iostream>
#include<array>
using namespace std;


void merge(int arr[],int beg ,int mid , int end){
    int arr3[end+1];
    int i = beg;
    int j = mid+1;
    int k = beg;

    while(i<=mid && j<=end){
        if(arr[i]>arr[j]){
            arr3[k] = arr[j];
            j++;
        }
        else{
            arr3[k] = arr[i];
            i++;
        }
        k++;
    }

    while(i<=mid){
        arr3[k] = arr[i];
        i++;
        k++;
    }

    while(j<=end){
        arr3[k] = arr[j];
        j++;
        k++;
    }
    
    for (int index = 0; index < k; index++) {
    arr[beg + index] = arr3[index];
}
}
void divide(int arr[],int beg , int end){
    if(beg<end){
        int mid = (beg+end)/2;
        divide(arr,beg,mid);
        divide(arr,mid+1,end);
        merge(arr,beg,mid,end);
    }
}


int main(){
    int arr[6] = {23,4,16,7,1,0};
    divide(arr,0,5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
using namespace std;


int main(){
    int arr[7] = {10,20,10,30,20,40,10};
    bool arr1[7] = {}; 
    int max= 1;
    int maxelement = 0;

    for(int i=0;i<7;i++){
        if(arr1[i]){
            continue;
        }
        int count = 1;
        for(int j=i+1;j<7;j++){
            if(arr[i] == arr[j]){
                count++;
                arr1[j] = true;
            }
        }
        if(count > max){
            max = count;
            maxelement = arr[i];
        }
        cout<<arr[i]<<" ITERATES "<<count<<" Times"<<endl;
    }

    cout<<"Max element "<<maxelement<<endl;
}
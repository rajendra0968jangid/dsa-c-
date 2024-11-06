#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,13,15,14,16,18,17};
    int length = sizeof(arr)/sizeof(int);
    // cout<<length;
    for(int i=0;i<length;i++){
        for(int j=0;j<length;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int k=0;k<length;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}
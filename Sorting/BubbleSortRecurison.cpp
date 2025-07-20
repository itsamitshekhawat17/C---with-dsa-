#include<iostream>
using namespace std;

void bubbleSort(int arr[] , int n){
    //Base case ;
    if(n == 0) return;
    
    for(int i = 0 ; i<n ; i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }

    bubbleSort(arr ,n-1);//n is size
}

int main(){
    int arr[] = {3,4,7,8,9,2,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr ,n);

    for(int i = 0; i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0 ;
}
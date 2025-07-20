#include<iostream>
using namespace std;

int quick(int arr[],int start , int end ){
    int pivot =  arr[end];
    int i = start - 1;

    for(int j = start ; j <=end ;j++){
        if(arr[j]<pivot){
            i++;
        
            swap(arr[i],arr[j]);
        }
    }

    swap(arr[i+1],arr[end]);
    return i+1;
}

void quickSort(int arr[],int start , int end ){
    if (start >=end) {
    
        return ; 

    }
    

    int pivotindex = quick(arr,start,end);
    
    quickSort(arr , start , pivotindex -1 );
    quickSort(arr , pivotindex +1 , end);

}

int main(){
    int arr [] ={3,1,2,4,7,5,8,9,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    quickSort(arr , 0 ,n-1);

    for(int i = 0 ; i<n ;i++){
        cout<<arr[i]<<" ";
    }

    return 0 ;


}
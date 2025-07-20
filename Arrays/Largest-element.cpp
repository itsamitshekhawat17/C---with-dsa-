#include<iostream>
using namespace std;

int largestElement(int arr[] , int n){
    int maxi = arr[0];

    for(int i = 1 ; i<n;i++){
        if(maxi<arr[i]){
            maxi = arr[i];
        }
        
        
    }


   return maxi;
}

int main(){
    int arr[]= {2,4,3,6,8,9,0,1};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"largest element : "<<largestElement(arr ,n);

    return 0 ;


    
}
 
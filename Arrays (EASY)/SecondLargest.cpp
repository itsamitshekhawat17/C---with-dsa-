#include<iostream>
#include<climits>
using namespace std;

int secondLargest(int arr[],int n){
    int largest =INT_MIN;
    int secLargest = INT_MIN;

    for(int i = 0 ; i<n ;i++){
        if(arr[i]> largest){
            secLargest = largest;
            largest = arr[i]; 
        }
        else if(arr[i]>secLargest && arr[i] != largest){

            secLargest = arr[i];

        }
    }

    if (secLargest == INT_MIN) return -1;

    return secLargest;


}

int main(){
    int arr[] = {2,5,6,4,8,2,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<secondLargest(arr ,n);
    
}

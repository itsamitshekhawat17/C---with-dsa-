#include<iostream>
using namespace std;

void rev_arr(int arr[],int n , int i=0){
    if (i>=n/2) return;
    swap(arr[i],arr[n-i-1]);
    rev_arr(arr,n,i+1);
}
int main(){
    int arr[7]={3,2,5,6,7,5,6};
    int n =7;
    rev_arr(arr,7); //i was writing wrong call (arr,0,n-1)
    for(int l=0;l<n;l++){
        cout<<arr[l];}
    
    return 0;
}
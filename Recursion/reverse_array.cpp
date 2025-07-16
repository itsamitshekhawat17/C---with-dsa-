#include<iostream>
using namespace std;

void rev_arr(int arr[] ,int l , int r){
    if(l>=r) return;

    //  swaping the two ends 
    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    // recursive call
    rev_arr(arr,l+1,r-1);
    
    
}
int main(){
   int arr[5] = {3,2,5,1,6};
   int n = 5;

   rev_arr(arr , 0 ,n-1);
   for(int i = 0;i<n;i++)
   cout<<arr[i];


}
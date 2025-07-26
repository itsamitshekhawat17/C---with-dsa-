// this is basically two pointer Approach

#include<iostream>
#include<vector>
using namespace std ;

void moveend(vector<int>& arr){
    int n = arr.size();
    int j = 0;

    for(int i = 0 ; i <n ; i++){
        if(arr[i] != 0){
            arr[j] = arr[i] ;
            j++;
        }
    }

    while(j<n){
        arr[j] = 0;
        j++;
    }
}

int main(){
    vector<int> arr = {1,0,0,4,5,3,2,0};
    
    moveend(arr);
    for(int array:arr){
        cout<<array;
    }
    return 0;
}
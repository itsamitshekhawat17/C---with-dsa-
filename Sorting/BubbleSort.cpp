#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int>& arr){
    int n = arr.size();
    for (int i = 0;i<n-1;i++){
        for (int j =0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    vector<int> arr = {3,7,8,1,0};
    bubbleSort(arr);
    for(int num:arr){
        cout<<num<<" ";
    }

}
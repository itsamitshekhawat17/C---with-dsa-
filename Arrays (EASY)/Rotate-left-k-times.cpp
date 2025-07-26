#include<iostream>
#include<vector>
using namespace std;

int rotate(vector<int>& arr ,int k){
    int n = arr.size();
    k = k%n;

    vector<int> temp;

    for(int i = k ; i<n; i++){
        temp.push_back(arr[i]);
    }

    for(int i = 0 ; i <k ;i++){
        temp.push_back(arr[i]);
    }

    for(int i = 0 ; i < n ; i++){
        temp[i] = arr[i];
    }
}

int main(){
    vector<int> arr={1,2,3,4,5,6,7,9};

    cout<<rotate(arr,5);

}
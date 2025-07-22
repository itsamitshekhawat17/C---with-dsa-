#include<iostream>
#include<vector>
using namespace std ;

int rotateLeft(vector<int>& arr){
    int n = arr.size();

    int first = arr[0];

    for(int i = 0 ; i <n ; i++){
       arr[i-1] = arr[i];
    }

    arr [ n-1] = first ;
}
int main(){
    vector<int> arr ={1,2,3,4};
     rotateLeft(arr);

    for(int array:arr){
        cout<<array<<" ";
    }
    return 0 ;

}



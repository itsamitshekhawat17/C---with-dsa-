#include<iostream>
using namespace std;

bool isPresent(int arr[][4],int target , int rows , int cols ){
     for(int i = 0 ; i<rows;i++){
        for(int j =0;j<cols;j++){
            if(arr[i][j]==target){
            return  true;}
        }
    }
    return false;
}

int main(){
    int arr[3][4];

    for(int i = 0 ; i<3;i++){
        for(int j =0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0 ; i<3;i++){
        for(int j =0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the element to search";

    int target;
    cin >>target;
    if(isPresent(arr,target,3,4)){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}
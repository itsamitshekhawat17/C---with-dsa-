#include<iostream>
#include<vector>
using namespace std;

int wavePrint(vector<vector<int>>& arr){
    int row = arr.size();
    int col = arr[0].size();
    for(int j = 0;j<col;j++){
        if(j%2==0){
            for(int i =0;i<row;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i =row-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
    
}

int main(){
    vector<vector<int>> arr(3,vector<int>(4));

    cout<<"enter the elements of array"<<endl;;
    for(int i =0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"element of arrray is : "<<endl;
    for(int i =0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    wavePrint(arr);
    

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

bool ispresent(vector<vector<int>>&matrix , int target){
    int row = matrix.size();
    int col = matrix[0].size();

    int st = 0;
    int end=(row*col)-1;

    while(st<=end){
        int mid = (st+end)/2;
        int elements = matrix[mid/col][mid%col];
        if(elements>target){
            end = mid -1;
        }
        else if(elements<target){
            st=mid+1;
        }
        else{
            
            return true;
        }
    }
    
    return false;

}

int main(){
    vector<vector<int>> matrix(4,vector<int>(4));
    

    cout<<"enter the elements of array"<<endl;;
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"element of arrray is : "<<endl;
    for(int i =0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    if(ispresent(matrix,55)){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}
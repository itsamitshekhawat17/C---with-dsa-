#include<iostream>
#include<vector>
using namespace std;

int spiralMatrix(vector<vector<int>>& matrix ){
    int top = 0;
    int bottom = matrix.size()-1;
    int left = 0;
    int right = matrix[0].size()-1;

    while(top<=bottom && left<=right){
        // left to right
        for(int i = left;i<=right;i++){
            cout<<matrix[top][i]<<" ";
        }
        top++;

        // top to bottom

        for(int j =top;j<=bottom;j++){
            cout<<matrix[j][right]<<" ";
        }
        right--;

        if(top<=bottom){
            // right to left
            for(int i=right;i>=left;i--){
                cout<<matrix[bottom][i]<<" ";
            }
        bottom--;
    }
        if(left<=right){
            //bottom to top
            for(int j = bottom;j>=top;j--){
                cout<<matrix[j][left]<<" ";
            }
            left++;
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

    cout<<"spiral matrix is "<<endl;
    spiralMatrix(arr);
    

    return 0;
}
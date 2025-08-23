#include<iostream>
#include<climits>
using namespace std;

int rowSum(int arr[][4],int rows,int col){
    for(int row=0;row<3;row++){
        int sum = 0 ;
        for(int col = 0;col<4;col++){
            sum += arr[row][col];
        }
        cout<<"sum of row "<<row<<" is "<<sum<<endl;
    

    }

}

int largestsum(int arr[][4],int row , int col){
    int maxi = INT_MIN;
    int rowindex=-1;
    for(int row=0;row<3;row++){
        int sum = 0 ;
        for(int col = 0;col<4;col++){
            sum += arr[row][col];
        }
        if(sum>maxi){
            maxi =sum;
            rowindex = row;
    }
}
cout<<"The maximum sum is "<<maxi<<endl;
return rowindex;
}
int main(){
    int arr[3][4];

    cout<<"enter the elements"<<endl;

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
    // cout<<rowSum(arr,3,4);
    int ans = largestsum(arr,3,4);
    cout<<"max row at index is "<<ans<<endl;

   
}
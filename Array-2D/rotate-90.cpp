#include<iostream>
using namespace std;
int rotate(int arr[][3],int n){
    
    // transpose of  matrix
    for(int i = 0 ; i<n;i++){
        for(int j =i;j<n;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
}
}

// reverse each row 
    for(int i = 0;i<n;i++){
        int left =0;
        int right = n-1;
        while(left<right){
            int temp = arr[i][left];
            arr[i][left] = arr[i][right];
            arr[i][right] = temp;
            left++;
            right--;
        }
    }
}
int main(){

    int n = 3;
    int arr[3][3];

    cout<<"enter the elements"<<endl;

    for(int i = 0 ; i<n;i++){
        for(int j =0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The array is " <<endl;
    for(int i = 0 ; i<n;i++){
        for(int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;}
rotate(arr,3);
cout<<"rotated array  "<<endl;
    for(int i = 0 ; i<n;i++){
        for(int j =0;j<n;j++){
            cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        return 0;


}
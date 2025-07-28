#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& nums,int x){
    int st = 0;
    int end = nums.size()-1;
    int ans  = nums.size() ;
    while(st<=end){
        int mid = (st+end)/2;

        if(nums[mid]>x){
            ans = mid;

            end = mid -1 ;
        }
        else {
           st = mid+1;
        }
       
        
    }
    return ans;

}

int main (){
    vector<int> nums = {3, 5,8,9, 15, 19};
    int x =9;

    cout<<binarysearch(nums,x);
    return 0 ;
}
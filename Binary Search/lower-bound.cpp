#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& nums,int target,int st,int end){
    if(st<=end){
        int mid = (end +st)/2;
        if(target>nums[mid]){
            return binarysearch(nums,target,mid+1,end);
        }
        if(target<nums[mid]){
            return binarysearch(nums,target,st,mid-1);
        }
        else{
            return mid -1 ;
        }
    }
    
    return -1 ;
}

int main (){
    vector<int> nums = {0,1,3,5,6,8,9,10};
    int target = 6;
    int st = 0;
    int end = nums.size()-1;

    cout<<binarysearch(nums,target,st,end);
    return 0 ;
}
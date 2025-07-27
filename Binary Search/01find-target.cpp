#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& nums,int target){
    int st = 0;
    int end = nums.size()-1;
    while(st<=end){
        int mid = (st+end)/2;

        if(target>nums[mid]){
            st = mid +1 ;
        }
        else if(target<nums[mid]){
           end = mid -1;
        }
        else{
            return mid;
        }
    }
    return -1 ;
}

int main (){
    vector<int> nums = {0,1,3,5,6,8,9,10};
    int target = 6;

    cout<<binarysearch(nums,target);
    return 0 ;
}
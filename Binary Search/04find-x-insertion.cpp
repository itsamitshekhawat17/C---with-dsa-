#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int>& nums,int target ){
   int st = 0 ; 
   int end =  nums.size()-1;
        
        while(st<=end){
            int mid = (st+end)/2;

            if(target>nums[mid]){
                st = mid + 1 ;
            }
            else if(target<nums[mid]){
                end = mid - 1;
            }
            else{
                return mid ;
            }
        }
        return st;
    
    }


int main (){
    vector<int> nums = {3, 5,8,9, 15, 19};
    int target =12;

    cout<<binarysearch(nums,target);
    return 0 ;
}
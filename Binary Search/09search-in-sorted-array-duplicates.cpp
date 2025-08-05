#include<iostream>
#include<vector>
using namespace std;
 
 bool search(vector<int>& nums, int target) {
    int st = 0 ;
    int end = nums.size()-1;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(target==nums[mid]){
            return true;
        }
        if(nums[st]==nums[mid] && nums[mid]==nums[end]){
            st ++;
            end --;}
        else if(nums[st]<=nums[mid]){//left sorted 
            if(target>=nums[st] && target<nums[mid]){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
        }
        
        else {//right sorted hai 

            if(target>nums[mid] && target<=nums[end]){
                st = mid+1;
            }
            else{
                end= mid-1;
            }
        }
        }
    
    return false;
        
    }
int main(){
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    int target = 5;

    int ans = search(nums,target);
    cout<<ans<<endl;
    return 0;
}

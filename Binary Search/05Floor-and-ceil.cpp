#include<iostream>
#include<vector>
#include<utility>

using namespace std;

vector<int> binarysearch(vector<int>& nums,int target ){
   int st = 0 ; 
   int end =  nums.size()-1;
   int floor =-1;
   int ceil = -1;
        
        while(st<=end){
            int mid = (st+end)/2;
            
            if(target>nums[mid]){
                floor = nums[mid];
                st = mid + 1 ;
            }
            else{
                end = mid-1;
            }
            
    }
    st = 0 , end = nums.size()-1;
    while(st<=end){
            int mid = (st+end)/2;
            
            if(target<nums[mid]){
                ceil = nums[mid];
                end = mid - 1 ;
            }
            else{
                st = mid+1;
            }
            
    }
    return {floor ,ceil};
}


int main (){
    vector<int> nums = {3,4,4,7,8,10};
    int target =5;

    vector<int> result = binarysearch(nums,target);
    cout<<"floor: "<<result[0]<<" ceil: "<<result[1]<<endl;
    return 0 ;
}
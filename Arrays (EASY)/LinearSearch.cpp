#include<iostream>
#include<vector>
using namespace std;

int linearSearch(vector<int>& nums , int target){

    for(int i = 0 ; i<nums.size() ;i++){
        if(target == nums[i]){
            return i;
            i++;

        }
        
        
    }
    return -1;
}

int main(){
    vector<int> nums = {1,2,3,4,0,8,9};

    cout<<linearSearch(nums , 5);
}
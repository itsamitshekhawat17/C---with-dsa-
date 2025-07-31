#include<iostream>
#include<vector>
using namespace std; 

int searchleft(vector<int>& nums , int target){
    int st = 0;
    int end = nums.size()-1;
    int ans = -1;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(target==nums[mid]){
            ans =mid;
            end = mid - 1;
        }
        else if (target <nums[mid]){
            st = mid +1;
        }
        else{
             end = mid -1;
        }
    }
   return ans;

}

int searchright(vector<int>& nums , int target){
    int st = 0;
    int end = nums.size()-1;
    int ans = -1;
    while(st<=end){
        int mid = st +(end-st)/2;
        if(target==nums[mid]){
            ans = mid;
            st = mid+1;
        }
        else if (target <nums[mid]){
            st = mid +1;
        }
        else{
            end =mid-1;
        }
    }
   return ans;

}

int countOccurence(vector<int>& nums ,int target){
    int left = searchleft(nums , target); 
    if(left == -1) return 0;
    int right = searchright(nums , target);
    return right - left+1;
}

int main(){
    vector<int> nums = {1,1,2,3,3,3,3,4};
    int target  = 3 ;

    int answer = countOccurence(nums,target);
    cout<<"The "<<target<<" appears "<<answer<<" times"<<endl;
    return 0;
}
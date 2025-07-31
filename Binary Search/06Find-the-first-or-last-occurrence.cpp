#include<iostream>
#include<vector>
using namespace std;

int firstoccurence(vector<int>& nums , int target){
    int st = 0;
    int end =nums.size();
    int ans = -1;

    while(st<=end){
        int mid = st + (end-st)/2;

        if(target == nums[mid]){
            ans = mid;
            end = mid -1;
        }
        else if (nums[mid]<target){
            st = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}
int lastoccurence(vector<int>& nums , int target){
    int st = 0;
    int end =nums.size();
    int ans = -1;

    while(st<=end){
        int mid = st + (end-st)/2;

        if(target == nums[mid]){
            ans = mid;
            st = mid +1;
        }
        else if (nums[mid]<target){
            st = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}

vector<int> searchrange(vector<int>& nums , int target){
    int first =  firstoccurence(nums,target);
    int second = lastoccurence(nums,target);

    return{first,second};

}

int main(){
    vector<int> nums = {1,2,3,4,5,6,6,7};
    int target = 6;

    vector<int> answer = searchrange(nums,target);
    cout<<"first occurence : "<<answer[0]<<" last occurence : "<<answer[1]<<endl;
    return 0;

}
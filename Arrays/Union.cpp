#include<iostream>
#include<vector>
using namespace std;

vector<int> getUnion( vector<int>& nums1 , vector<int>& nums2){
	
    int n = nums1.size();
    int m = nums2.size();

    // two pointer
    int i = 0;
    int j = 0;

    vector<int> result;

    while(i<n && j<m){
        if(nums1[i] <= nums2[j]){
            if(result.size() == 0 || result.back() !=nums1[i]){
                result.push_back(nums1[i]);
            }
            i++;
        }
        else{
            if(result.size() == 0 || result.back() !=nums2[j]){
                result.push_back(nums2[j]);
                
            }
            j++;
         }
        }
        while(i<n){
            if(result.back() !=nums1[i]){
                result.push_back(nums1[i]);
            }
            i++;
        }
        while(j<m){
            if(result.back() !=nums2[j]){
                result.push_back(nums2[j]);
            }
            j++;
        }
        return result;
    }

int main() {
    vector<int> nums1 = {1,2,3,4,4,5};
    vector<int> nums2 = {5,6,7,8,9};

    vector<int> result = getUnion(nums1, nums2);

    for(int num : result){
        cout << num << " ";
    }
    return 0;
}

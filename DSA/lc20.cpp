// bubble sort
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        bool swapped = 0;
        for(int i=n-2; i>=0; i--)
        {
            for(int j=0; j<=i; j++)
            {
                if(nums[j]>nums[j+1]){
                 swap(nums[j], nums[j+1]);
                    swapped = 1;
                }
            }
            if(!swapped)
            break;
        }
        return nums;
    }
};
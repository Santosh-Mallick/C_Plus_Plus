// Kth Missing Positive Number

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         int n=arr.size();
//         int start=0,end=n-1;
//         while(start<=end){
//             int mid = start+(end-start)/2;
//             int missingno = arr[mid]-(mid+1);
//             if(missingno<k){
//                 start = mid+1;
//             } else {
//                 end = mid-1;
//             }
//         }
//         return start+k;
//     }
// };

// Peak Index in a Mountain Array

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//         int n = arr.size();
//         int start = 0, end = n-1, ans;
//         while(start<=end){
//             int mid = end + (start-end)/2;
//             if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
//                 return mid;
//             }
//             else if(arr[mid]>arr[mid-1]){
//                 start = mid+1;
//             } else 
//                 end = mid-1;
//         }
//         return -1;
//     }
// };

// Find Minimum in Rotated Sorted Array

// class Solution {
// public:
//     int findMin(vector<int>& nums) {
//         int n = nums.size();
//         int start = 0, end = n-1, ans = nums[0];

//         while(start<=end){
//             int mid = start + (end-start)/2;
//             if(nums[0]<=nums[mid]){
//                 //right side
//                 start = mid+1;
//             } else {
//                 //left side
//                 ans = nums[mid];
//                 end = mid-1;
//             }
//         }
//         return ans;
//     }
// };


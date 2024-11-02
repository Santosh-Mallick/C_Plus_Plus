// binary search
// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int n = nums.size();
//         int start=0,end=n-1,mid,first=-1,last=-1;
//         //first postion
//         while(start<=end){
//            mid=start+(end-start)/2;
//            if(nums[mid]==target){
//             first=mid;
//             end=mid-1;
//            }
//            else if(nums[mid]<target)
//            start=mid+1;
//            else
//            end=mid-1;
//         }
//         //last postion
//         start=0,end=n-1;
//         while(start<=end){
//            mid=start+(end-start)/2;
//            if(nums[mid]==target){
//             last=mid;
//             start=mid+1;
//            }
//            else if(nums[mid]<target)
//            start=mid+1;
//            else
//            end=mid-1;
//         }

//         vector<int>a(2);
//         a[0]=first;
//         a[1]=last;
//         return a;
//     }
// };


// Question : Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.

// class Solution {
// public:
//     int searchInsert(vector<int>& nums, int target) {
//         int n = nums.size();
//         int start=0,end=n-1,mid,index=n;
//         while(start<=end){
//             mid=start+(end-start)/2;
//             if(nums[mid]==target){
//                 index = mid;
//                 break;
//             }
//             else if(nums[mid]<target){
//                 start = mid+1;
//             }
//             else{
//                 index = mid;
//                 end = mid-1;
//             }
//         }
//         return index;
//     }
// };


//sqrt(5)
// class Solution {
// public:
//     int mySqrt(int x) {
//         if (x == 0 || x == 1) return x;
        
//         int start = 0, end = x, ans = 0;
//         while (start <= end) {
//             int mid = start + (end - start) / 2;
//             if (mid <= x / mid) {  
//                 ans = mid;
//                 start = mid + 1;
//             } else {
//                 end = mid - 1;
//             }
//         }
//         return ans;
//     }
// };

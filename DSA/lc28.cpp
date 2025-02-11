// Segregate 0s and 1s

// class Solution {
//   public:
//     void segregate0and1(vector<int> &arr) {
//         // code here
//         int start = 0 ,end = arr.size()-1;
        
//         while(start<end) {
//             if(arr[start]==0) {
//               start++;
//             }
//             else {
//                 if(arr[end]==0) {
//                     swap(arr[start],arr[end]);
//                     start++,end--;
//                 } else {
//                     end--;
//                 }
//             }
//         }
//     }
// };

// Two Sum II - Input Array Is Sorted

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& arr, int target) {
//         vector<int>ans;
//         int start=0,end=arr.size()-1;

//         while(start<end){
//             if(arr[start]+arr[end]==target){
//                 ans.push_back(start+1);
//                 ans.push_back(end+1);
//                 return ans;
//             } else {
//                 if (arr[start]+arr[end]<target) {
//                     start++;
//                 } else {
//                     end--;
//                 }
//             }
//         }
//         return ans;
//     }   
// };

// Pair Difference

#include <iostream>
#include <vector>
#include <algorithm> // For sort()
using namespace std;

bool pair_difference(vector<int>& arr, int target) {
    sort(arr.begin(), arr.end()); // Sort the array
    int start = 0, end = 1, n = arr.size();

    while (end < n) {
        int diff = arr[end] - arr[start];

        if (diff == target)
            return true; // Pair found

        if (diff < target)
            end++; // Increase end pointer if the difference is smaller
        else
            start++; // Increase start pointer if the difference is larger

        // Ensure the two pointers are not the same
        if (start == end)
            end++;
    }

    return false; // No such pair found
}

int main() {
    vector<int> arr;
    int target = 20;
    arr.push_back(12);
    arr.push_back(16);
    arr.push_back(19);
    arr.push_back(67);
    arr.push_back(90);
    arr.push_back(46);
    arr.push_back(87);
    
    bool result = pair_difference(arr, target);
    
    if (result)
        cout << "Pair with difference " << target << " found!" << endl;
    else
        cout << "No pair with difference " << target << " found." << endl;

    return 0;
}

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n=nums.size();
//         int start=0,end=n-1,mid;
//     while(start<=end) {
//         mid=(start+end)/2;        //mid= start+(end-start)/2;
//         if(nums[mid]==target)
//         return mid;
//         else if(nums[mid]<target)
//         start=mid+1;
//         else
//         end=mid-1;
//     }
//         return -1;
//     }
// };

// #include<iostream>
// using namespace std;

//     int binarySearch(int arr[], int n, int target){
//          int start = 0;
//          int end = n - 1;
//         while(start<=end){
//         int mid = (start+end)/2;
//          if(arr[mid]==target)
//          return mid;
//          else if(arr[mid]<target)
//             start = mid+1;
//         else
//             end = mid-1;
//         }
//         return -1;
//         }
// int main(){
//     int n;
//     cout<<"enter the size of the array : "<<endl;
//     cin>>n;
//     int arr[n];
//     cout<<"enter the array elements : "<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
//     int target;
//     cout<<"enter the element to search : "<<endl;
//     cin>>target;
//     cout<<binarySearch(arr,n,target)<<" postion";
//     return 0;
//     }

#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int target) {
    int start = 0;
    int end = n - 1;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)  //30 27 25 22 19
            start = mid + 1;
        else
            end = mid - 1;
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements in sorted order: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    int position = binarySearch(arr, n, target);
    if (position != -1)
        cout << "Element found at position " << position << endl;
    else
        cout << "Element not found" << endl;
    return 0;
}
// Enter the size of the array: 5
// Enter the array elements in sorted order: 30
// 27
// 23
// 19
// 15
// Enter the element to search: 27
// Element found at position 1
// Allocate Minimum Pages(book allocation) (gfg)


// class Solution {
//   public:
//     int findPages(vector<int> &arr, int k) {
//         // code here
//         int N = arr.size();
//         if(k>N)
//         return -1;
//         int start=0,end=0,mid,ans = -1;
//         for(int i = 0; i<N; i++) {
//             start = max(start,arr[i]);
//             end += arr[i];
//         }
//         while(start<= end){
//             mid = start + (end -  start)/2;
//             int pages = 0,count = 1;
//             for (int i=0; i<N; i++){
//                 pages += arr[i];
//                 if(pages>mid)
//                  {
//                      count++;
//                      pages = arr[i];
//                  }
//             }
//             if (count<=k){
//                 ans = mid;
//                 end = mid-1;
//             } else
//             start = mid+1;
//         }
//         return ans;
//     }
// };

// The Painter's Partition Problem-II (gfg)

// class Solution {
//   public:
//     int minTime(vector<int>& arr, int k) {
//         //checking if n is smaller than or equal to k 
        
//         int n = arr.size();

//         // Start and End
//         int start = 0,end = 0,mid,ans;
        
//         for(int i=0; i<n; i++){
//             start = max(start,arr[i]);
//             end += arr[i];
//         }
        
//         while(start<=end){
//             int mid = start+(end-start)/2;
            
//             int count = 1, pages = 0;
//             for(int i=0; i<n; i++){
//                 pages += arr[i];
//                 if(pages>mid){
//                     count++;
//                     pages=arr[i];
//                 }
//             }
//             if(count<=k){
//                 ans = mid;
//                 end = mid-1;
//             }
//             else
//             start = mid+1;
//         }
//         return ans;
//     }
// };
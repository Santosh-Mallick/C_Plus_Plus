// Aggressive cows (Take you forward) GFG

// class Solution {
//   public:

// bool canWePlace(vector<int> &stalls, int dist, int cows) {
//     int cntCows = 1; // Place the first cow in the first stall
//     int last = stalls[0]; // Keep track of the position of the last placed cow

//     for (int i = 1; i < stalls.size(); i++) {
//         if (stalls[i] - last >= dist) { // If the current stall is far enough
//             cntCows++; // Place a cow here
//             last = stalls[i]; // Update the position of the last placed cow
//             if (cntCows >= cows) { // If we have placed all cows
//                 return true;
//             }
//         }
//     }
//     return false; // Not possible to place all cows with the given distance
// }

// int aggressiveCows(vector<int> &stalls, int k) {
//     sort(stalls.begin(), stalls.end()); // Sort the stalls in ascending order
//     int n = stalls.size();
//     int low = 1, high = stalls[n - 1] - stalls[0]; // Minimum and maximum possible distances

//     int ans = 0; // Variable to store the maximum distance
//     while (low <= high) {
//         int mid = (low + high) / 2; // Midpoint of the current search space
//         if (canWePlace(stalls, mid, k)) { // Check if we can place cows with `mid` distance
//             ans = mid; // Update the answer
//             low = mid + 1; // Try for a larger distance
//         } else {
//             high = mid - 1; // Try for a smaller distance
//         }
//     }
//     return ans;
// }
// };
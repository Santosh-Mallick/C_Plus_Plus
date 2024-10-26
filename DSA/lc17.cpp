// arrays notes
// Arrays in C are always passed to the function as pointers pointing to the first element of the array.
// #include<iostream>
// using namespace std;

// int searchelement (int n,int arr[],int a){
//     int index =-1;
//     for(int i=0; i<a; i++){
//         if(arr[i]==n){
//             index=i;
//             break;
//         }
//     }
//     return index;
// }

// int main() {
//     int a;
//     cout<<"enter the length of array"<<endl;
//     cin>>a;
//     int arr[a],n;
//     cout<<"enter array elements"<<endl; 
//     for(int i=0; i<a; i++){
//         cin>>arr[i];
//     }
//     cout<<"enter the element to find :"<<endl;
//     cin>>n;
//     int result = searchelement(n, arr, a);
    
//     if(result != -1) {
//         cout << "Element found at index: " << result << endl;
//     } else {
//         cout << "Element not found." << endl;
//     }
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void reversearray(int n, int arr[]) {
//     //    without temp array    
//     int i = 0, j = n - 1;
//     while(i < j) {
//         int temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//         i++;
//         j--;
//     }
// }
// void reversearray(int n, int arr[]){
    // Using Temp array
//     int temp[n];
//     int i = 0;
//     int j = n - 1;
    
//     while(j >= 0){
//         temp[i] = arr[j];
//         i++;
//         j--;
//     }
    
//     cout << "Reversed array: ";
//     for(int i = 0; i < n; i++) {
//         cout << temp[i] << " ";
//     }
//     cout << endl;
// }

// int main(){
//     int n;
//     cout << "Enter the size of the array: ";
//     cin >> n;
    
//     int arr[n];
//     cout << "Enter array elements: ";
//     for(int i = 0; i < n; i++) {
//         cin >> arr[i];
//     }
    
//     reversearray(n, arr); 
//     cout << "Reversed array: ";
//     for(int i = 0; i < n; i++) {
//         cout << arr[i] << " ";
//     }
//     cout <<endl;
    
//     return 0;
// }

// User function template for C++
// class Solution {
//   public:
//     // Function returns the second
//     // largest elements
//     int getSecondLargest(vector<int> &arr) {
//         int ans = INT_MIN;
//         for(int i=0; i<arr.size(); i++){
//             if(arr[i]>ans){
//                 ans = arr[i];
//             }
//         }
//         int sl=INT_MIN;
//         for(int i=0; i<arr.size(); i++){
//             if(arr[i]<ans && arr[i]>sl){
//                 sl = arr[i];
//             }
//         }
//         if(sl == INT_MIN) {
//             return -1;
//         }
//         return sl;
//     }
// };

// User function template for C++
// class Solution {
//   public:

//     // Note that the size of the array is n-1
//     int missingNumber(int n, vector<int>& arr) {
        
//         int sum=0;
//         for(int i=0; i<arr.size(); i++){
//             sum += arr[i];
//         }
//         int ans = n*(n+1)/2;
        
//         return ans-sum;
        
//     }
// };
// find nth fibonnaci no.

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout<<"enter the number : "<<endl;
//     cin>>n;
//     int arr[1000];
//     arr[0] = 0;
//     arr[1] = 1;
//     for(int i=2; i<n; i++){
//         arr[i] = arr[i-1]+arr[i-2];
//     }
//     int ans = arr[n-1];
//     cout<<ans;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter no. of elements: ";
//     cin >> n;
    
//     // Dynamically allocating array based on user input size
//     int arr[n];
    
//     cout << "Enter the elements: ";
//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }
    
//     // Storing the last element
//     int temp = arr[n-1];
    
//     // Shifting the elements one position to the right
//     for(int i = n-1; i > 0; i--){
//         arr[i] = arr[i-1];
//     }
    
//     // Assigning the last element to the first position
//     arr[0] = temp;
    
//     cout << "Array after rotation: ";
//     for(int i = 0; i < n; i++){
//         cout << arr[i] << " ";
//     }
    
//     return 0;
// }



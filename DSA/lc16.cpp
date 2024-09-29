#include<iostream>
using namespace std;
 int main() {
    int n;
    cout<<"Enter array length \n";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements \n";
    for(int i=0; i<n; i++){
       cin>>arr[i];
    }
    int min_ans=arr[0];
    int max_ans=arr[0];
    for(int i=1; i<n; i++){
        if (arr[i]<min_ans)
        {
            min_ans = arr[i];
        }
        if (arr[i]>max_ans)
        {
            max_ans = arr[i];
        }
    }
    cout<<"minimum element : "<<min_ans<<endl;
    cout<<"maximum element : "<<max_ans;
    return 0;
 }
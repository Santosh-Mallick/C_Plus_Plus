// decimal to binary
// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter the number";
//     cin>>num;
//     int rem, ans = 0, mul=1;

//     while(num>0)
//     {
//         //reminder
//         rem = num%2;
//         // quotient
//         num = num/2;
//         // ans
//         ans = rem*mul+ans;
//         // mul 
//         mul = mul*10;
//     }
//     cout<<ans<<endl;
// }
// Output
// Enter the number13
// 1101

// 2nd Approach

// #include<iostream>
// using namespace std;
// int main() {
//     int num;
//     cout<<"Enter the number";
//     cin>>num;
//     int rem, ans = 0, mul=1;

//     while(num>0)
//     {
//         //reminder
//         rem = num&1;
//         // quotient
//         num = num>>1;
//         // ans
//         ans += rem*mul;
//         // mul 
//         mul *= 10;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// Binary to Decimal
// #include<iostream>
// using namespace std;

// int main() {
//     int num;
//     cout<<"enter the number: ";
//     cin>>num;
//     int mul=1,ans=0,rem;
//     while(num>0)
//     {
//         //remainder
//         rem = num%10;
//         // num ko divide kar do
//         num = num/10;
//         //ans
//         ans = mul*rem+ans;
//         //mul
//         mul*=2;
//     }
//     cout<<ans<<endl;
//     return 0;
// }
// enter the number: 1101
// 13
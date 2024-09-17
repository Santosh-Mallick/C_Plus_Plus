// Add Digits

// class Solution
// {
// public:
//     int addDigits(int num)
//     {

//         while (num > 9)
//         {
//             int ans = 0, rem;
//             while (num != 0)
//             {
//                 rem = num % 10;
//                 num /= 10;
//                 ans += rem;
//             }
//             num = ans;
//         }
//         return num;
//     }
// };

// Leap Year
// class Solution
// {
// public:
//     int isLeap(int N){
//         if(N%400==0)
//         return 1;
//         else if(N%4==0 && N%100!=0)
//         return 1;
//         else
//         return 0;
//     }
// };

// Leetcode
// Add Digits
// #include<iostream>
// using namespace std;

// int addDigits(int num) {
//     while (num > 9) {
//         int ans = 0, rem;
//         while (num != 0) {
//             rem = num % 10;
//             num /= 10;
//             ans += rem;
//         }
//         num = ans;
//     }
//     return num;
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;
//     cout << "Add Digits Result: " << addDigits(num) << endl;
//     return 0;
// }
// Leap Year
// #include<iostream>
// using namespace std;

// int isLeap(int N) {
//     if (N % 400 == 0)
//         return 1;
//     else if (N % 4 == 0 && N % 100 != 0)
//         return 1;
//     else
//         return 0;
// }

// int main() {
//     int N;
//     cout << "Enter a year: ";
//     cin >> N;
//     if (isLeap(N))
//         cout << N << " is a leap year." << endl;
//     else
//         cout << N << " is not a leap year." << endl;
//     return 0;
// }
// Reverse Integer
// #include<iostream>
// #include<climits>
// using namespace std;

// int reverse(int x) {
//     int ans = 0, rem;
//     while (x != 0) {
//         rem = x % 10;
//         x /= 10;
//         if (ans > INT_MAX / 10 || ans < INT_MIN / 10)
//             return 0;
//         ans = ans * 10 + rem;
//     }
//     return ans;
// }

// int main() {
//     int x;
//     cout << "Enter an integer: ";
//     cin >> x;
//     cout << "Reversed Integer: " << reverse(x) << endl;
//     return 0;
// }
// Power of Two
// #include<iostream>
// using namespace std;

// bool isPowerOfTwo(int n) {
//     if (n < 1)
//         return false;

//     while (n > 1) {
//         if (n % 2 == 1)
//             return false;
//         n /= 2;
//     }
//     return true;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     if (isPowerOfTwo(n))
//         cout << n << " is a power of 2." << endl;
//     else
//         cout << n << " is not a power of 2." << endl;
//     return 0;
// }
// Palindrome Number
// #include<iostream>
// #include<climits>
// using namespace std;

// bool isPalindrome(int x) {
//     if (x < 0)
//         return false;

//     int num = x, rem, ans = 0;
//     while (num) {
//         rem = num % 10;
//         num /= 10;
//         if (ans > INT_MAX / 10)
//             return false;
//         ans = ans * 10 + rem;
//     }
//     return ans == x;
// }

// int main() {
//     int x;
//     cout << "Enter a number: ";
//     cin >> x;
//     if (isPalindrome(x))
//         cout << x << " is a palindrome." << endl;
//     else
//         cout << x << " is not a palindrome." << endl;
//     return 0;
// }
// Bitwise Complement
// #include<iostream>
// using namespace std;

// int bitwiseComplement(int n) {
//     if (n == 0)
//         return 1;
//     int ans = 0, mul = 1, rem;
//     while (n) {
//         rem = n % 2;
//         rem = rem ^ 1;
//         n /= 2;
//         ans = ans + rem * mul;
//         mul *= 2;
//     }
//     return ans;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "Bitwise Complement: " << bitwiseComplement(n) << endl;
//     return 0;
// }

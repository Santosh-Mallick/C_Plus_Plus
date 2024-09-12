// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "enter a no.";
//     cin >> n;
//     if (n < 2)
//     {
//         cout << "not prime";
//         return 0;
//     }
//     else
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (n % i == 0)
//             {
//                 cout << "not prime";
//                 return 0;
//             }
//         }
//         cout << "prime";
//         return 0;
//     }
// };

// fibonacci series


// #include<iostream>
// using namespace std;

// int main() {
//     int a=0,b=1,c;
//     cout<<a<<" "<<b<<" ";
//     for(int i =0; i<6; i++){
//         c=a+b;
//         cout<<c<<" ";
//         a=b;
//         b=c;
//     }
//     return 0;
// }
// 0 1 1 2 3 5 8 13

// #include <iostream>
// using namespace std;

// int fibonacci(int n){
    
//     if(n <= 1)
//         return n;
        
//     return fibonacci(n-1) + fibonacci(n-2);
    
// }

// int main()
// {
//     int n = 15;

//     for(int i = 0; i < n; i++)
//         cout << fibonacci(i) << ", ";

//     return 0;
// }
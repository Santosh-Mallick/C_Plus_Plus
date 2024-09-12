// #include<iostream>
// using namespace std;
// int main() {
//     int i,j,k;
//     for(i=0; i<=4; i++){
//         for(j=3; j>=i; j--){
//             cout<<" "<<" ";
//         }
//             for(k=0; k<=i; k++){
//                 cout<<"x"<<" ";
//             }
//         cout<<endl;
//     }
//     return 0;
// }
//         x 
//       x x 
//     x x x 
//   x x x x 
// x x x x x 
// #include<iostream>
// using namespace std;
// int main() {
//     int row,col,n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(row=1; row<=n; row++){
//         for(col=1; col<=n-row; col++){
//             cout<<" "<<" ";
//         }
//         for(col=1; col<=row; col++){
//             cout<<"x"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// enter n : 4
//       x 
//     x x 
//   x x x 
// x x x x 
// #include<iostream>
// using namespace std;
// int main() {
//     int row,col,n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(row=1; row<=n; row++){
              //for space
//         for(col=1; col<=n-row; col++){
//             cout<<" "<<" ";
//         }
            //for printing
//         for(col=1; col<=row; col++){
//             cout<<row<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//         1 
//       2 2 
//     3 3 3 
//   4 4 4 4 
// 5 5 5 5 5
// #include<iostream>
// using namespace std;
// int main() {
//     int row,col,n;
//     cout<<"enter n : ";
//     cin>>n;
//     for(row=1; row<=n; row++){
//             //   for space
//         for(col=1; col<=n-row; col++){
//             cout<<" "<<" ";
//         }
//             // for printing
//         for(col=1; col<=row; col++){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//         1 
//       1 2 
//     1 2 3 
//   1 2 3 4 
// 1 2 3 4 5 
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j;
//     for(i=1; i<=5; i++){
//         for(j=1; j<=5-i; j++) {
//         cout<<" "<<" ";
//         }
//         for(j=1; j<=i; j++){
//         char ch = 'A'+j-1;
//         cout<<ch<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//         A 
//       A B 
//     A B C 
//   A B C D 
// A B C D E
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j;
//     char ch = 'A';
//     for(i=1; i<=5; i++){
//         for(j=1; j<=5-i; j++) {
//         cout<<" "<<" ";
//         }
//         for(j=1; j<=i; j++){
//         cout<<ch++<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//         A 
//       B C 
//     D E F 
//   G H I J 
// K L M N O 
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j;
//     for(i=1; i<=5; i++){
//         for(j=1; j<=5-i; j++){
//             cout<<" "<<" ";
//         }
//         for(j=i; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
//         1 
//       2 1 
//     3 2 1 
//   4 3 2 1 
// 5 4 3 2 1
// #include<iostream>
// using namespace std;
// int main() {
//     int i,j;
//     for(i=1; i<=6; i++){
//         for(j=1; j<=6-i; j++){
//             cout<<" "<<" ";
//         }
//         for(j=1; j<=i; j++){
//             cout<<"x"<<" ";
//         }
//         for(j=2; j<=i; j++){
//             cout<<"x"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//           x 
//         x x x 
//       x x x x x 
//     x x x x x x x 
//   x x x x x x x x x 
// x x x x x x x x x x x 
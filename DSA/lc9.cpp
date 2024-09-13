// #include<iostream>
// using namespace std;

// int main() {
//     int i,j;
//     for(i=1; i<=5; i++){
//         for(j=1; j<=5-i; j++){
//             cout<<" "<<" ";
//         }
//         for(j=1; j<=2*i-1; j++){
//             cout<<"x"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//         x 
//       x x x 
//     x x x x x 
//   x x x x x x x 
// x x x x x x x x x 
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j;
//     for(i=1; i<=5; i++){
//         for(j=1; j<=5-i; j++){
//             cout<<" "<<" ";
//         }
//         for(j=1; j<=2*i-1; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//         1 
//       1 2 3 
//     1 2 3 4 5 
//   1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 9 
// #include<iostream>
// using namespace std;
// int main() {
//     int i,j;
//     for(i=1; i<=5; i++){
//         for(j=1; j<=5-i; j++){
//             cout<<" "<<" ";
//         }
//         for(j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         for(j=i-1; j>=1; j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1 
// #include<iostream>
// using namespace std;

// int main() {
//     int i,j;
//     for(i=5; i>=1; i--){
//         for(j=5; j>=i; j--){
//             cout<<" "<<" ";
//         }
//         for(j=1; j<=2*i-1; j++){
//             cout<<"x"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//   x x x x x x x x x 
//     x x x x x x x 
//       x x x x x 
//         x x x 
//           x 
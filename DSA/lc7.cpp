// #include<iostream>
// using namespace std;
// int main() {
//     int i,j;
//     for(i=1; i<6; i++){
//         for(j=0;j<i;j++){
//             cout<<"x"<<" ";
//         }
//         cout<<endl;
//     }
//  return 0;
// }
// x
// x x
// x x x
// x x x x
// x x x x x
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for (i=1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for (i=1;i<=5;i++)
//     {
//         for(j=1;j<=i;j++){
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,j;
//     for (i = 1; i <= 5; i++)
//     {
//         for (j = 1; j <= i; j++)
//         {
//             char n = 'a' + (i - 1);
//             cout << n;
//         }
//         cout << endl;
//     }
//     return 0;
// }
// a
// bb
// ccc
// dddd
// eeeee

// #include<iostream>
// using namespace std;
// int main() {
//   int i,j;
//   int k=0;
//   for(i=0; i<5; i++){
//     for(j=0; j<=i; j++){
//         char n = 'a'+k++;
//       cout<<n<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }
// a 
// b c 
// d e f 
// g h i j 
// k l m n o 

// #include<iostream>
// using namespace std;
// int main() {
//   int i,j;
//   char n = 'a';
//   for(i=0; i<5; i++){
//     for(j=0; j<=i; j++){
//       cout<<n++<<" ";
//     }
//     cout<<endl;
//   }
//   return 0;
// }
// a 
// b c 
// d e f 
// g h i j 
// k l m n o 

// #include<iostream>
// using namespace std;
// int main() {
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=5;j>=i;j--){
//             cout<<"x"<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// x x x x x 
// x x x x 
// x x x 
// x x 
// x 
// #include<iostream>
// using namespace std;
// int main(){
//     int i,j;
//     for (i=0; i<=4; i++) {
//         for(j=1; j<=(5-i); j++) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 
// #include<iostream>
// using namespace std;
// int main() {
//     int i,j;
//     for(i=0; i<=4; i++) {
//         for(j=5; j>=(5-i); j--) {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// 5 
// 5 4 
// 5 4 3 
// 5 4 3 2 
// 5 4 3 2 1 
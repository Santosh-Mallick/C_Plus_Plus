// #include <iostream>
// #include <string>

// using namespace std;

// int main() {
//     string str;

//     cout << "Enter a string: ";
//     getline(cin, str);

//     for (char &c : str) {
//         if (c >= 'a' && c <= 'z') {
//             c -= 32;
//         } else if (c >= 'A' && c <= 'Z') {
//             c += 32;
//         }
//     }

//     cout << "Converted string: " << str << endl;

//     return 0;
// }
#include<iostream>
#include<cmath>
using namespace std;

int count_digit(int n){
 int count=0;
 while(n){
    count++;
    n /= 10;
 }
 return count;
}
bool armstrong(int num, int digit){
    int n=num;
    int ans = 0, rem;
    while(n){
        rem = n%10;
        n /=10;
        ans = ans + pow(rem,digit);
    }
    if(ans == num)
        return true;
    else
        return false;
}



int main(){
    int num, digit;
    cout<<"Enter a Number";
    cin>>num;
    digit = count_digit(num);
    if(armstrong(num,digit)){
        cout<<"Armstrong";
    } else {
        cout<<"Not Armstrong";
    }
    return 0;
}
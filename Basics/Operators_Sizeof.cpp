#include<iostream>
using namespace std;

int main() {
    int a; // printing an uninitialized variable
    cout<<a<<endl; //(4201099) Results in Garbage Value

    int size = sizeof(a); 
    cout<<size<<endl; //4 bytes

    char b;
    cout<<b<<endl;//No Value

    bool age = 18;
    cout<<age<<endl;//returns 1

    bool d(8+1==9);
    cout<<d<<endl;//return 1 (True)

    double f = 565.8867;
    cout<<f<<endl;//565.8867
    int size_of = sizeof(f);
    cout<<size_of<<endl;//8 bytes

/*
 * * ------------TYPE CAST-------------------- * * 
 */
    int e = 'a';
    cout<<e<<endl;//97
    char c=e;
    cout<<c<<endl;//a(ascii value of a -> 97)

//* -------------------------------------- //*

    char ch1 = 123456;
    cout<<ch1<<endl;//output -> @ 
    
    /* 
    * ! Error -> warning: overflow in implicit constant conversion.
    In C++, the char type typically occupies 1 byte (8 bits) of memory. The range of a char type is from -128 to 127 (for signed char) or 0 to 255 (for unsigned char). The value 123456 exceeds this range.

    When a large integer value is assigned to a char, it undergoes implicit conversion, where only the least  significant byte of the integer is stored in the char variable. This means only the last 8 bits of 123456 will be used.
    */ 

}
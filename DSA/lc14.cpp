// Functions
#include<iostream>
using namespace std;
bool prime(int n)
{
    if (n < 2)
    {
        return false;
    }
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
            return true;

}
int fact(int n)
{
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans *= i;
    }
    return ans;
}

int main() {
    int a;
    cout<<"enter a no.";
    cin>>a;
    cout<<fact(a)<<endl;;
    cout<<prime(a);
    return 0;
}


// C program to illustrate Call by Reference
#include <stdio.h>

// Function Prototype
void swapx(int*, int*);

// Main function
int main()
{
    int a = 10, b = 20;

    // Pass reference
    swapx(&a, &b); // Actual Parameters

    printf("Inside the Caller:\na = %d b = %d\n", a, b);

    return 0;
}

// Function to swap two variables
// by references
void swapx(int* x, int* y) // Formal Parameters
{
    int t;

    t = *x;
    *x = *y;
    *y = t;

    printf("Inside the Function:\nx = %d y = %d\n", *x, *y);
}
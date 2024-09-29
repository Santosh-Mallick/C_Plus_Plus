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
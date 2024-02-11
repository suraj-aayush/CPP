#include <iostream>
#include <string>
using namespace std;

int power(int a, int n)
{
    if(n==0)
    return 1;

    if(n==1)
    return a;

//if n is even then (A ka power N ) = (A ^(N/2) + A^(N/2))
//ex-> 2^6 = 2^3 * 2^3

    int ans = power(a, n/2);

    if(n%2==0)
    return ans *ans;

//if n is odd then (A ka power N ) = A * (A ^(N/2) + A^(N/2))
//ex-> 2^7 = 2 * 2^3 * 2^3    
    else
    return a*ans*ans;
}

int main(){
    int a=2,n=5;
    cout<<power(a,n)<<endl; // 2^5

    cout<<power(a,n+1); // 2^6
return 0;
}
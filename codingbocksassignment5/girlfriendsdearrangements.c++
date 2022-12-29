#include<bits/stdc++.h>
using namespace std;
int f(int n)
{
    if(n<=2)
    return n-1;
    return (n-1)*(f(n-1)+f(n-2));
}
int main()
{
    int n;cin>>n;
    cout<< f(n);
}

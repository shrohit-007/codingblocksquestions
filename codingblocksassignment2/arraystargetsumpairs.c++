#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;std::cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum;std::cin>>sum;
    std::sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==sum)
            {
                std::cout<<arr[i]<<" and "<<arr[j]<<"\n";
            }
        }
    }
}

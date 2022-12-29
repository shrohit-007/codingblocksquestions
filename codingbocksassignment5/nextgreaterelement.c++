#include <bits/stdc++.h> 
using namespace std; 

// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n) 
{ 
    stack<int>st;
    vector<int>ans(n,-1);
    for(int i=0;i<n;i++)
    {
        while(!st.empty() and arr[st.top()]<arr[i])
        {
            ans[st.top()]=i;
            st.pop();
        }
        st.push(i);
    }
    for(int i=0;i<n;i++)
    {
        int x=-1;
        if(ans[i]!=-1)
        x=arr[ans[i]];
        cout<<arr[i]<<","<<x<<endl;
    }
} 

// The Main Function
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        nextGreater(arr, n); 
    }
	
	return 0; 
} 


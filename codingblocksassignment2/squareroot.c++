#include<bits/stdc++.h>
using namespace std;
long long squareRoot(long long A) {
        long long s=1,e=100000000;
        long long ans=0;
        while(s<=e)
        {
                long long mid=s+(e-s)/2;
                if(mid*mid<=A)
                {
                        ans=mid;
                        s=mid+1;
                }
                else
                e=mid-1;
        }
        return ans;

}
int main () {
        long long A;
        cin >> A;
        cout << squareRoot(A);
	return 0;
}

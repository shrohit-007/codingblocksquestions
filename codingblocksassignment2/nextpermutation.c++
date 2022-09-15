#include<bits/stdc++.h>
int main() {
	int t;std::cin>>t;
	while(t--)
	{
	int n;std::cin>>n;
	std::vector<int>nums;
	for(int i=0;i<n;i++)
	{
		int a;std::cin>>a;
		nums.emplace_back(a);
	}
        int f=0;
        int ind=-1;
        for(int i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
               ind =i;
                //cout<<ind<<endl;
                break;
            }
        }
        //cout<<ind<<endl;
        if(ind!=-1)
        {
            for(int i=n-1;i>=0;i--)
            {
                if(nums[i]>nums[ind])
                {
                    std::swap(nums[i],nums[ind]);
                    break;
                }
            }
            std::reverse(nums.begin()+ind+1,nums.end());
            for(int I:nums)
			std::cout<<I<<" ";
			std::cout<<"\n";
			continue;

        }
        if(!f)
        {
            std::reverse(nums.begin(),nums.end());
        } 
		for(int I:nums)
		{
			std::cout<<I<<" ";
		}std::cout<<"\n";
	}
	return 0;
}

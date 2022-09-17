vector<vector<bool>>v1(s.size(),vector<bool>(s.size(),false));
	int cn=0;
	for(int i=0;i<s.size();i++)
	{
		for(int k=0,j=i;j<s.size();k++,j++)
		{
			if(i==0)
			{
				v1[k][j]=true;
			}
			else if(i==1)
			{
				if(s[k]==s[j])
				v1[k][j]=true;
				else
				v1[k][j]=false;
			}
			else
			{
				if(s[k]==s[j])
				v1[k][j]=v1[k+1][j-1];
				else
				v1[k][j]=false;
			}
			if(v1[k][j])
			cn++;
		}
	}

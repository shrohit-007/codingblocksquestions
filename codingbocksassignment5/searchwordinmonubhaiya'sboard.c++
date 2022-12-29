#include<bits/stdc++.h>
using namespace std;
int f=0;
    unordered_set<string>v1;
    int mx=0;
    void generate(vector<vector<char>>&board,string s,set<string>&v,int i,int j,vector<vector<int>>&visited)
    {
        if(i<0 or j<0 or i>=board.size() or j>=board[0].size() or visited[i][j]==1 or  s.length()>=mx)
        {
            return;
        }
        visited[i][j]=1;
            s+=board[i][j];
            if(v1.find(s)!=v1.end())
            {
                v1.erase(s);
                v.insert(s);
            }
            generate(board,s,v,i+1,j,visited);
            generate(board,s,v,i-1,j,visited);
            generate(board,s,v,i,j+1,visited);
            generate(board,s,v,i,j-1,visited);
        visited[i][j]=0;
            s=s.substr(0,s.length()-1);
    }
int main(){
    int n,m,k;cin>>n>>m>>k;
    vector<vector<char>>board;
    for(int i=0;i<n;i++)
    {
        vector<char>temp;
        for(int j=0;j<m;j++)
        {
            char a;cin>>a;
            temp.push_back(a);
        }
        board.push_back(temp);
    }
    vector<string>words;
    for(int i=0;i<k;i++)
    {
        string s;cin>>s;
        words.push_back(s);
    }
    set<string>v;
        for(int i=0;i<words.size();i++)
        {
            v1.insert(words[i]);
            mx=max((int)words[i].length(),mx);
        }
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                vector<vector<int>>visited(board.size(),vector<int>(board[0].size(),0));
                generate(board,"",v,i,j,visited);
            }
        }
        for(auto &it:v)
        {
            cout<<it<<" ";
        }
}

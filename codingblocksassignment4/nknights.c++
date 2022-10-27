#include<bits/stdc++.h>
using namespace std;
int cnt=0;
bool canplace(int i, int j, vector<vector<char>>&board)
{
    if (board[i][j] == '_')
        return true;
    else
        return false;
}
void attack(int i,int j,char a,vector<vector<char>>&board)
{
	int n=board.size();
	if ((i + 2) < n && (j - 1) >= 0) {
        board[i + 2][j - 1] = a;
    }
    if ((i - 2) >= 0 && (j - 1) >= 0) {
        board[i - 2][j - 1] = a;
    }
    if ((i + 2) < n && (j + 1) < n) {
        board[i + 2][j + 1] = a;
    }
    if ((i - 2) >= 0 && (j + 1) < n) {
        board[i - 2][j + 1] = a;
    }
    if ((i + 1) < n && (j + 2) < n) {
        board[i + 1][j + 2] = a;
    }
    if ((i - 1) >= 0 && (j + 2) < n) {
        board[i - 1][j + 2] = a;
    }
    if ((i + 1) < n && (j - 2) >= 0) {
        board[i + 1][j - 2] = a;
    }
    if ((i - 1) >= 0 && (j - 2) >= 0) {
        board[i - 1][j - 2] = a;
    }
}
void place(int i,int j,char k,char a,vector<vector<char>>&board,vector<vector<char>>&new_board)
{
	for(int x=0;x<board.size();x++)
	{
		vector<char>temp;
		for(int y=0;y<board.size();y++)
		{
			temp.push_back(board[x][y]);
		}
		new_board.push_back(temp);
	}
	new_board[i][j]=k;
	attack(i,j,a,new_board);
}
void display(vector<vector<char>>&board)
{
	for(int i=0;i<board.size();i++)
	{
		for(int j=0;j<board.size();j++)
		{
			if(board[i][j]=='K')
			{
				cout<<"{"<<i<<"-"<<j<<"} ";
			}
		}
	}
	cout<<" ";
}
void generate(int n,int row,int col,vector<vector<char>>&board)
{
	if(n<=0)
	{
		cnt++;
		display(board);
		return;
	}
	for(int i=row;i<board.size();i++)
	{
		for(int j=col;j<board.size();j++)
		{
			if(canplace(i,j,board))
			{
				vector<vector<char>>new_board;
				place(i,j,'K','A',board,new_board);
				generate(n-1,i,j,new_board);
			}
		}
		col=0;
	}
}
int main()
{
	int n;cin>>n;
	vector<vector<char>>board;
	for(int i=0;i<n;i++)
	{
		vector<char>temp;
		for(int j=0;j<n;j++)
		{
			temp.push_back('_');
		}
		board.push_back(temp);
	}
	generate(n,0,0,board);
	cout<<endl<<cnt<<endl;
}

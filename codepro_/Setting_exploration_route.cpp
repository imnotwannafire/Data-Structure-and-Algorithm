#include <bits/stdc++.h>

using namespace std;

#define MAX_RC	(100)

int R, C;
vector<string> grid;
int di[4] = {1, 0, -1, 0};
int dj[4] = {0, -1, 0, 1};
int dist[11][11];
void Input_Data(void) {
	cin >> R >> C;
	for (int r = 0; r < R; r++) {
		string s;
		cin >> s;
		grid.push_back(s);
	}
}
void bfs(int i, int j, int val)
{
	queue<pair<int, int>> q;
	vector<vector<bool>> used(R, vector<bool> (C, false));
	vector<vector<int>> step(R, vector<int> (C, 0));
	q.push({i, j});
	used[i][j]=true;
	step[i][j]=0;
	dist[val][val]=0;
	while(!q.empty())
	{
		pair<int, int> cur = q.front();

		q.pop();
		if(grid[cur.first][cur.second]>'0'&& grid[cur.first][cur.second]<='9')
		{
			int idx = grid[cur.first][cur.second] - '0';
			dist[val][idx]=step[cur.first][cur.second];
		}
		if(grid[cur.first][cur.second]=='S')
		{
			int idx = 10;
			dist[val][idx]=step[cur.first][cur.second];
		}
		for(int k=0; k<4; k++)
		{
			int ni = cur.first+di[k];
			int nj = cur.second+dj[k];
			if(ni<0 || ni>=R || nj<0 || nj>=C) continue;
			if(used[ni][nj]||grid[ni][nj]=='*') continue;
			q.push({ni, nj});
			used[ni][nj]=true;
			step[ni][nj]=step[cur.first][cur.second]+1;
		}
	}
	return;
}
int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int sol = INT_MAX;
	Input_Data();
	int n;
	pair<int, int> src;
	for(int i=0; i<R; i++)
	{
		for(int j=0; j<C; j++)
		{

			if(grid[i][j]=='S')
			{
				bfs(i, j, 10);
			}
			else if(grid[i][j]>'0' && grid[i][j]<='9')
			{
				int idx = grid[i][j]-'0';
				n = max(idx, n);
				bfs(i, j, idx);
			}
		}
	}
	// Test
	// for(int i=0; i<11; i++)
	// {
	// 	for(int j=0; j<11; j++)
	// 	{
	// 		cout<<dist[i][j]<<' ';
	// 	}
	// 	cout<<endl;
	// }
	vector<int> order(n);
	iota(order.begin(), order.end(), 1);
	do
	{
		int total = 0;
		total += dist[10][order[0]];
		for(int i=0; i<n-1; i++)
		{
			total += dist[order[i]][order[i+1]];
		}
		total += dist[order[n-1]][10];
		sol = min(total, sol);

	}while(next_permutation(order.begin(),order.end()));






	cout << sol << '\n';

	return 0;
}

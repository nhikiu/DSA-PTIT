#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<pair<int, int>> adj;
vector<vector<bool>> vs;

int BFS(){
	int cnt = 0;
	for(auto p : adj){
		int row = p.first, col = p.second;
		if(!vs[row][col]){
			cnt++;
			queue<pair<int, int>> q;
			q.push({row, col});
			vs[row][col] = true;
			while(!q.empty()){
				auto p = q.front();
				q.pop();
				for(int i = p.first - 1; i <= p.first + 1; i++){
					for(int j = p.second - 1; j <= p.second + 1; j++){
						if(!vs[i][j] && a[i][j] == 1){
							vs[i][j] = true;
							q.push({i, j});
						}
					}
				}
			}
		}
	}
	return cnt;
}

void solve(){
	int n, m;
	char c;
	cin >> n >> m;
	a.assign(n + 5, vector<int>(m + 5));
	vs.assign(n + 5, vector<bool>(m + 5, false));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> c;
			if(c == 'w' || c == 'W') a[i][j] = 1;
			else if(c == '.') a[i][j] = 0;
			if(a[i][j] == 1) adj.push_back({i, j});
		}
	}
	cout << BFS() << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	solve();
	return 0;
}
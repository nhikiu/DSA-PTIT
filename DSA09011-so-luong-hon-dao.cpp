#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> a;
vector<pair<int, int>> adj;
vector<vector<bool>> vs;

int BFS(){
	int cnt = 0;
	for(auto p : adj){
		int row = p.first, col = p.second;
		if(vs[row][col] == false){
			cnt++;
			queue<pair<int, int>> q;
			q.push({row, col});
			vs[row][col] = true;
			while(!q.empty()){
				auto tmp = q.front();
				q.pop();
				for(int i = tmp.first - 1; i <= tmp.first + 1; i++){
					for(int j = tmp.second - 1; j <= tmp.second + 1; j++){
						if(a[i][j] == 1 && vs[i][j] == false){
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
	cin >> n >> m;
	a.clear(); adj.clear();
	a.assign(n + 5, vector<int>(m + 5));
	vs.assign(n + 5, vector<bool>(m + 5, false));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
			if(a[i][j] == 1) adj.push_back({i, j});
		}
	}
	cout << BFS() << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
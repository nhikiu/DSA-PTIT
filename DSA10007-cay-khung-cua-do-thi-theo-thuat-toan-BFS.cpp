#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> vs;
vector<pair<int, int>> ans;

void BFS(int u){
	queue<int> q;
	vs[u] = true;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : ke[v]){
			if(!vs[x]){
				vs[x] = true;
				q.push(x);
				ans.push_back({x, v});
			}
		}
	}
}

void solve(){
	int n, m, u, a, b;
	cin >> n >> m >> u;
	ke.resize(n + 5); vs.assign(n + 5, false);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
	BFS(u);
	if(ans.size() != n - 1) cout << "-1\n";
	else{
		for(auto x : ans) cout << x.second << " " << x.first << endl;
	}
	ke.clear(); vs.clear(); ans.clear();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
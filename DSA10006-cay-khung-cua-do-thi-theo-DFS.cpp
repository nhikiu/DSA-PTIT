#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> vs;
vector<pair<int, int>> ans;

void DFS(int u){
	//ans.push_back(u, 0);
	vs[u] = true;
	for(int v : ke[u]){
		if(!vs[v]){
			ans.push_back({v, u});
			DFS(v);
		}
	}
}

void solve(){
	int n, m, a, b, u;
	cin >> n >> m >> u;
	ke.resize(n + 5); vs.assign(n + 5, false);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
	DFS(u);
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
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> egde;
vector<bool> vs;

void DFS(int u){
	vs[u] = true;
	cout << u << " ";
	for(int v : egde[u]){
		if(!vs[v]){
			DFS(v);
		}
	}
}

void solve(){
	int n, m, u, a, b;
	cin >> n >> m >> u;
	egde.resize(n + 5);
	vs.assign(n + 5, false);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		egde[a].push_back(b);
	}
	DFS(u);
	cout << endl;
	egde.clear(); vs.clear();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
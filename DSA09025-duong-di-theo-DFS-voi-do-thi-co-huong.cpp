#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> egde;
vector<bool> vs;
vector<int> e, ans;

void DFS(int u){
	vs[u] = true;
	for(int x : egde[u]){
		if(!vs[x]){
			e[x] = u;
			DFS(x);
		}
	}
}

void solve(){
	int n, m, u, v, a, b;
	cin >> n >> m >> u >> v;
	egde.resize(n + 5);
	vs.assign(n + 5, false);
	e.assign(n + 5, 0);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		egde[a].push_back(b);
	}
	DFS(u);
	if(!vs[v]) cout << -1;
	else{
		int t = v;
		while(t > 0){
			ans.push_back(t);
			t = e[t];
		}
		for(int i = ans.size() - 1; i >= 0; i--){
			cout << ans[i] << " ";
		}
	}
	cout << endl;
	egde.clear(); vs.clear(); ans.clear();
}

int main(){
	int test;
	cin >> test;
	while(test--){
		solve();
	}
	return 0;
}
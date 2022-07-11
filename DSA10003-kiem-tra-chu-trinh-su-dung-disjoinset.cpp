#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> vs;

int DFS(int u, int pre){
	vs[u] = true;
	for(int v : ke[u]){
		if(!vs[v]){
			if(DFS(v, u)) return true;
		}
		else if(v != pre) return true;
	}
	return false;
}

void solve(){
	int n, m, a, b;
	cin >> n >> m;
	ke.clear(); ke.resize(n + 5);
	vs.clear(); vs.assign(n + 5, false);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
	for(int i = 1; i <= n; i++){
		if(!vs[i]){
			if(DFS(i, 0)){
				cout << "YES\n";
				return;
			}
		}
	}
	cout << "NO\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
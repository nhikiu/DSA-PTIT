#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> vs;

bool DFS(int u, int parent){
	vs[u] = true;
	for(int v : ke[u]){
		if(!vs[v]){
			if(DFS(v, u)) return true;
		}
		else if(v != parent) return true;
	}
	return false;
}

void solve(){
	int n, m, a, b;
	cin >> n >> m;
	ke.clear();
	vs.clear();
	ke.resize(n + 5);
	vs.assign(n + 5, false);
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
}
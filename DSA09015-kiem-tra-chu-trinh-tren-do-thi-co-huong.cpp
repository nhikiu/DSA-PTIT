#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<int> color;

bool DFS(int u){
	color[u] = 1;
	for(int v : ke[u]){
		if(color[v] == 0){
			if(DFS(v)) return true;
		}
		else if(color[v] == 1) return true;
	}
	color[u] = 2;
	return false;
}

void solve(){
	int n, m, a, b;
	cin >> n >> m;
	ke.clear();
	color.clear();
	ke.resize(n + 5);
	color.assign(n + 5, 0);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		ke[a].push_back(b);
	}
	for(int i = 1; i <= n; i++){
		if(color[i] == 0){
			if(DFS(i)){
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

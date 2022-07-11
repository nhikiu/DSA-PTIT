#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> egde;
vector<bool> vs;

void BFS(int u){
	queue<int> q;
	vs[u] = true;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : egde[v]){
			if(!vs[x]){
				vs[x] = true;
				q.push(x);
			}
		}
	}
}

void solve(){
	int n, m, a, b;
	cin >> n >> m;
	egde.clear(); vs.clear();
	egde.resize(n + 5);
	vs.assign(n + 5, false);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		egde[a].push_back(b);
	}
	for(int i = 1; i <= n; i++){
		vs.assign(n + 5, false);
		BFS(i);
		for(int j = 1; j <= n; j++){
			if(!vs[j]){
				cout << "NO\n";
				return;
			}
		}
	}
	cout << "YES\n";
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
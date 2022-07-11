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
		cout << v << " ";
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
	int n, m, u, a, b;
	cin >> n >> m >> u;
	egde.resize(n + 5);
	vs.assign(n + 5, false);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		egde[a].push_back(b);
	}
	BFS(u);
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
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<int> vs;

void BFS(int u){
	queue<int> q;
	q.push(u);
	vs[u] = 1;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int i : ke[v]){
			if(!vs[i]){
				vs[i] = 1;
				q.push(i);
			}
		}
	}
}

void solve(){
	int n, m, u, v, a, b, q;
	cin >> n >> m;
	ke.resize(n + 5);
	while(m--){
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
	cin >> q;
	while(q--){
		cin >> u >> v;
		vs.assign(n + 5, 0);
		BFS(u);
		(vs[v]) ? cout << "YES\n" : cout << "NO\n";
		vs.clear();
	}
	ke.clear();
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
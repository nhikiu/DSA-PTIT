#include<bits/stdc++.h>
using namespace std;

bool vs[10005];
vector<int> v[10005];

void DFS(int u){
	vs[u] = true;
	cout << u << " ";
	for(int x : v[u]){
		if(!vs[x]){
			DFS(x);
		}
	}
}

void solve(){
	int n, m, u, a, b;
	cin >> n >> m >> u;
	memset(vs, false, sizeof(vs));
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	DFS(u);
	for(auto &i : v) i.clear();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	return 0;
}
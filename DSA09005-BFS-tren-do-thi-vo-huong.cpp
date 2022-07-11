#include<bits/stdc++.h>
using namespace std;

bool vs[10005];
vector<int> v[10005];

void BFS(int u){
	vs[u] = true;
	queue<int> q;
	q.push(u);
	while(!q.empty()){
		int top = q.front();
		cout << top << " ";
		q.pop();
		for(int x : v[top]){
			if(vs[x] == 0){
				q.push(x);
				vs[x] = true;
			}
		}
	}
}

void solve(){
	int n, m, u, a, b;
	cin >> n >> m >> u;
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	memset(vs, false, sizeof(vs));
	BFS(u);
	for(auto &x : v) x.clear();
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	return 0;
}

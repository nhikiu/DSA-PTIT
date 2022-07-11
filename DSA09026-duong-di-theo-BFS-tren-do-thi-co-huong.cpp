#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> Ke;
vector<int> vs, pre, ans;

void BFS(int u){
	queue<int> q;
	q.push(u);
	vs[u] = 1;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : Ke[v]){
			if(!vs[x]){
				pre[x] = v;
				vs[x] = 1;
				q.push(x);
			}
		}
	}
}

void solve(){
	int n, m, u, v, a, b;
	cin >> n >> m >> u >> v;
	Ke.clear(); vs.clear(); pre.clear(); ans.clear();
	Ke.resize(n + 5);
	vs.assign(n + 5, 0);
	pre.assign(n + 5, 0);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		Ke[a].push_back(b);
	}
	BFS(u);
	if(!vs[v]){
		cout << -1 << endl;
		return;
	}
	int t = v;
	while(t > 0){
		ans.push_back(t);
		t = pre[t];
	}
	for(int i = ans.size() - 1; i >= 0; i--){
		cout << ans[i] << " ";
	}
	cout << endl;
}

int main(){
	int T; cin >> T;
	while(T--){
		solve();
	}
	return 0;
}
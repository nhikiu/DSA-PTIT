#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> vs;

int BFS(int u){
	queue<int> q;
	vector<int> ans;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		ans.push_back(v);
		for(int x : ke[v]){
			if(!vs[x]){
				vs[x] = true;
				q.push(x);
			}
		}
	}
	return ans.size();
}

void solve(){
	int n, m, a, b;
	cin >> n >> m;
	ke.clear(); vs.clear();
	ke.resize(n + 5); vs.assign(n + 5, false);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		ke[a].push_back(b);
		ke[b].push_back(a);
	}
	int max = 0;
	for(int i = 1; i <= n; i++){
		if(!vs[i]){
			int dem = BFS(i);
			if(dem > max) max = dem;
		}
	}
	cout << max << endl;
}

int main(){
	int t; cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> egde;
vector<int> vs, ans, res;

void BFS(int u){
	queue<int> q;
	vs[u] = 1;
	q.push(u);
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto x : egde[v]){
			if(!vs[x]){
				vs[x] = 1;
				q.push(x);
				res[x] = v;
			}
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, a, b, u, v;
		cin >> n >> m >> u >> v;
		egde.resize(n + 1);
		for(int i = 1; i <= m; i++){
			cin >> a >> b;
			egde[a].push_back(b);
			egde[b].push_back(a);
		}
		vs.assign(n + 1, 0);
		res.assign(n + 1, 0);
		BFS(u);
		if(!vs[v]) cout << -1;
		else{
			int t = v;
			while(t > 0){
				ans.push_back(t);
				t = res[t];
			}
			for(int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";
		}
		cout << endl;
		res.clear();
		egde.clear();
		vs.clear();
		ans.clear();
	}
	return 0;
}
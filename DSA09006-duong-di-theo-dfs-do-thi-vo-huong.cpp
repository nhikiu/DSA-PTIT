#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> egde;
vector<int> res, ans;
bool vs[1005];

void DFS(int u){
	vs[u] = true;
	for(auto i : egde[u]){
		if(!vs[i]){
			DFS(i);
			res[i] = u;
		}
	}
}

int main(){
	int t, n, m, u, v, a, b;
	cin >> t;
	while(t--){
		cin >> n >> m >> u >> v;
		egde.resize(n + 1);
		memset(vs, false, sizeof(vs));
		res.assign(n + 1, 0);
		for(int i = 1; i <= m; i++){
			cin >> a >> b;
			egde[a].push_back(b);
			egde[b].push_back(a);
		}
		DFS(u);
		if(!vs[v]) cout << -1 << endl;
		else{
			int t = v;
			while(t > 0){
				ans.push_back(t);
				t = res[t];
			}
			for(int i = ans.size() - 1; i >= 0; i--) cout << ans[i] << " ";

			cout << endl;
		}
		res.clear();
		egde.clear();
		ans.clear();
	}
	return 0;
}

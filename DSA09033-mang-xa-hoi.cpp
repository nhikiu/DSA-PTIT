//KIEM TRA TINH LIEN THONG CUA DO THI CO HUONG

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ke;
vector<bool> vs;

void BFS(int u){
	queue<int> q;
	q.push(u);
	vs[u] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(int x : ke[v]){
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
	ke.clear(); vs.clear();
	ke.resize(n + 5);
	vs.assign(n + 5, 0);
	for(int i = 1; i <= m; i++){
		cin >> a >> b;
		ke[a].push_back(b);
	}
	BFS(1);
	for(int i = 1; i <= n; i++){
		if(!vs[i]){
			cout << "NO\n";
			return;
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
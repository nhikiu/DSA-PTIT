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

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, a, b;
		cin >> n >> m;
		egde.resize(n + 2);
		vs.assign(n + 1, false);
		for(int i = 1; i <= m; i++){
			cin >> a >> b;
			egde[a].push_back(b);
			egde[b].push_back(a);
		}
		int solt = 0;
		for(int i = 1; i <= n; i++){
			if(!vs[i]){
				solt++;
				BFS(i);
			}
		}
		cout << solt << endl;
		egde.clear();
		vs.clear();
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> egde;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, a, b, cou = 0;
		cin >> n >> m;
		egde.resize(n + 1);
		for(int i = 1; i <= m; i++){
			cin >> a >> b;
			egde[a].push_back(b);
			egde[b].push_back(a);
		}
		for(int i = 1; i <= n; i++){
			if(egde[i].size() % 2 == 1) cou++;
		}
		if(cou == 0) cout << 2;
		else if(cou <= 2) cout << 1;
		else cout << 0;
		cout << endl;
		egde.clear();
	}
	return 0;
}
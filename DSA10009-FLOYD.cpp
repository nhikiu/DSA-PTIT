#include<bits/stdc++.h>
using namespace std;
#define max 1e9 + 7

long long a[103][105], ans[105][105], n, m, f, s, w;;

void Floyd(){
	for(int k = 1; k <= n; k++){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(ans[i][j] > ans[i][k] + ans[k][j]){
					ans[i][j] = ans[i][k] + ans[k][j];
				}
			}
		}
	}
}

void solve(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			if(i == j){
				a[i][j] = 0;
				ans[i][j] = 0;
			}
			else{
				a[i][j] = max;
				ans[i][j] = max;
			}
		}
	}
	for(int i = 1; i <= m; i++){
		cin >> f >> s >> w;
		a[f][s] = w; a[s][f] = w;
		ans[f][s] = w; ans[s][f] = w;
	}
	Floyd();
	int t;
	cin >> t;
	while(t--){
		int u, v;
		cin >> u >> v;
		cout << ans[u][v] << endl;
	}
}

int main(){
	solve();
	return 0;
}
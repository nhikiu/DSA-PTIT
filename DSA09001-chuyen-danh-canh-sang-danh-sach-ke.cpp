#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, a, b;
		cin >> n >> m;
		vector<int> v[n + 1];
		for(int i = 1; i <= m; i++){
			cin >> a >> b;
			v[a].push_back(b);
			v[b].push_back(a);
		}
		for(int i = 1; i <= n; i++){
			cout << i << ": ";
			for(auto x : v[i]){
				cout << x << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
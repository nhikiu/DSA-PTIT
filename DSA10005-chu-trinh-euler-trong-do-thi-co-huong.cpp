#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> egde;
vector<int> duong, am;


int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, a, b;
		cin >> n >> m;
		egde.resize(n + 1);
		duong.assign(n + 1, 0);
		am.assign(n + 1, 0);
		for(int i = 1; i <= m; i++){
			cin >> a >> b;
			duong[a]++;
			am[b]++;
		}
		int mark = 1;
		for(int i = 1; i <= n; i++){
			if(duong[i] != am[i]){
				mark = 0;
				break;
			}
		}
		(mark) ? cout << 1 : cout << 0;
		cout << endl;
		egde.clear();
		duong.clear();
		am.clear();
	}
	return 0;
}
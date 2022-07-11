#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<int> mark;

bool sap_xep(int a, int b){
	if(mark[a] == mark[b]) return a < b;
	return mark[a] > mark[b];
}

void solve(){
	cin >> n;
	a.resize(n);
	mark.resize(1e5 + 1, 0);
	for(auto &i:a){
		cin >> i;
		mark[i]++;
	}
	sort(a.begin(), a.end(), sap_xep);
	for(auto &i:a) cout << i << " ";
	a.clear();
	mark.clear();
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
		cout << endl;
	}
	return 0;
}
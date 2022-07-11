#include<bits/stdc++.h>
using namespace std;

int n;

void solve(){
	cin >> n;
	vector<int> a(n);
	for(auto &i : a){
		cin >> i;
	}
	cout << min_element(a.begin(), a.end()) - a.begin() << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
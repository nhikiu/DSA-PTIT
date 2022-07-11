#include<bits/stdc++.h>
using namespace std;

bool check1(int n){
	vector<int> vs(10, 0);
	while(n > 0){
		int last = n % 10;
		if(vs[last]) return false;
		vs[last] = 1;
		n /= 10;
	}
	return true;
}

bool check2(int n){
	while(n > 0){
		if(n % 10 > 5) return false;
		n /= 10;
	}
	return true;
}

void solve(){
	int l, r, dem = 0;
	cin >> l >> r;
	for(int i = l; i <= r; i++){
		if(check1(i) && check2(i)) dem++;
	}
	cout << dem << endl;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
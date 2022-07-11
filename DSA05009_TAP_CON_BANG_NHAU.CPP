#include<bits/stdc++.h>
using namespace std;

int n, a[100], s, check;

void nhap(){
	s = 0;
	check = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
		s += a[i];
	}
}

void backtrack(int i, int sum){
	if(check) return;
	if(sum == s/2){
		check = 1;
		return;
	}
	else if(sum < s/2 && i < n){
		if(sum + a[i] <= s/2){
			backtrack(i + 1, sum + a[i]);
		}
		backtrack(i + 1, sum);
	}
}

void solve(){
	if(s % 2 != 0) cout << "NO\n";
	else{
		backtrack(0, 0);
		if(!check) cout << "NO\n";
		else cout << "YES\n";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		solve();
	}
	return 0;
}
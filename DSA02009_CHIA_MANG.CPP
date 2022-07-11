#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], check, used[100] = {0}, sum;

void backtrack(int dem, int tong){
	if(dem == k){
		check = 1;
		return;
	}
	if(check) return;
	for(int i = 1; i <= n; i++){
		if(used[i] == 0){
			used[i] = 1;
			if(tong == sum){
				backtrack(dem + 1, 0);
			}
			else if(tong < sum){
				backtrack(dem, tong + a[i]);
			}
		}
		used[i] = 0;
	}
}

void solve(){
	cin >> n >> k;
	sum = 0;
	check = 0;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
		sum += a[i];
	}
	if(sum % k != 0) cout << "0\n";
	else{
		sum /= k;
		backtrack(0, 0);
		if(check) cout << "1\n";
		else cout << "0\n";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
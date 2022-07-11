#include <bits/stdc++.h>
using namespace std;

int n, k, s, a[100], ans;

void nhap(){
	cin >> n >> k >> s;
	for(int i = 1; i <= n; i++){
		a[i] = i;
	}
}

void dequy(int i, int dem, int tong){
	if(dem == k && tong == s){
		ans++;
		return;
	}
	for(int j = i; j <= n; j++){
		if(a[j] + tong <= s){
			dequy(j + 1, dem + 1, tong + a[j]);
		}
	}
}

int main(){
	while(true){
		nhap();
		if(n == 0 && k == 0 && s == 0){
			return 0;
		}
		ans = 0;
		dequy(1, 0, 0);
		cout << ans << endl;
	}
	return 0;
}
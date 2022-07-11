#include<bits/stdc++.h>
using namespace std;

int n, k, a[1001], cau_hinh_dau_tien;


void solve(){
	int i = k;
	int tmp = n;
	while(i >= 2 && a[i] - a[i - 1] == 1) i--;
	if(i == 1) cau_hinh_dau_tien = 1;
	else{
		a[i]--;
		for(int j = k; j >= i + 1; j--){
			a[j] = tmp;
			tmp--;
		}
	}
	//cout << "Cau hinh dau tien " << cau_hinh_dau_tien << endl;
	if(cau_hinh_dau_tien){
		for(int i = 1; i <= k; i++){
			cout << n - k + i << " ";
		}
	}
	else{
		for(int i = 1; i <= k; i++){
			cout << a[i] << " ";
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cau_hinh_dau_tien = 0;
		for(int i = 1; i <= k; i++) cin >> a[i];
		solve();
		cout << endl;
	}
	return 0;
}
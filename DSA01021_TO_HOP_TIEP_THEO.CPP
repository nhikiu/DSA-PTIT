#include<bits/stdc++.h>
using namespace std;

int n, k, cau_hinh_cuoi_cung;
vector<int> a, mark;

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0){
		cau_hinh_cuoi_cung = 1;
	}
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

void solve(){
	sinh();
	int count = 0;
	for(int i = 1; i <= k; i++){
		if(mark[a[i]] == 0) count++;
	}
	if(!cau_hinh_cuoi_cung) cout << count;
	else cout << k;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		cau_hinh_cuoi_cung = 0;
		a.resize(k + 1, 0);
		mark.resize(n + 1, 0);
		for(int i = 1; i <= k; i++){
			cin >> a[i];
			mark[a[i]]++;
		}
		solve();
		cout << endl;
		a.clear();
    	mark.clear();
	}
	return 0;
}

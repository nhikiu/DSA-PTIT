#include<bits/stdc++.h>
using namespace std;

int n, k, s, t[100], a[100], cau_hinh_cuoi_cung;

//Ham sinh to hop chap k cua n
void ktao(){
	cau_hinh_cuoi_cung = 0;
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i == 0) cau_hinh_cuoi_cung = 1;
	else{
		a[i]++;
		for(int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

//kiem tra tong cac to tien = s ?
bool check(){
	int sum = 0;
	for(int i = 1; i <= k; i++){
		sum += t[a[i]];
	}
	return sum == s;
}

void solve(){
	cin >> n >> s;
	for(int i = 1; i <= n; i++){
		cin >> t[i];
	}
	sort(t + 1, t + n + 1, greater<int>());
	//i = so to tien
	for(int i = 1; i <= n; i++){
		k = i; //to hop gom k phan tu
		ktao();
		while(!cau_hinh_cuoi_cung){
			if(check()){
				cout << i << endl;
				return;
			}
			sinh();
		}
	}
	cout << -1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int n, s, a[100], b[100], cau_hinh_cuoi_cung, sum, ktra;

void ktao(){
	for(int i = 1; i <= n; i++){
		b[i] = 1;
	}
}

void sinh(){
	int i = n;
	while(i >= 1 && b[i] == 0){
		b[i] = 1;
		i--;
	}
	if(i == 0) cau_hinh_cuoi_cung = 1;
	else{
		b[i] = 0;
	}
}

void display(){
	vector<int> v;
	for(int i = 1; i <= n; i++){
		if(b[i] == 1) v.push_back(a[i]);
	}
	cout << "[";
	for(int i = 0; i < v.size() - 1; i++){
		cout << v[i] << " ";
	}
	cout << v[v.size() - 1] << "] ";
}

bool check(){
	int tong = 0;
	for(int i = 1; i <= n; i++){
		if(b[i] == 1) tong += a[i];
	}
	if(tong == s){
		ktra = 1;
		return true;
	}
	return false;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i = 1; i <= n; i++){
			cin >> a[i];
		}
		sort(a + 1, a + n + 1);
		cau_hinh_cuoi_cung = 0;
		sum = 0;
		ktra = 0;
		ktao();
		while(!cau_hinh_cuoi_cung){
			if(check()) display();
			sinh();
		}
		if(ktra == 0) cout << -1;
		cout << endl;
	}
	return 0;
}
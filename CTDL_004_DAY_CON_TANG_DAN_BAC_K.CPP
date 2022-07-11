#include<bits/stdc++.h>
using namespace std;

int n, m[100], k, a[100], b[100], cau_hinh_cuoi_cung;

void ktao(){
	for(int i = 1; i <= k; i++){
		a[i] = i;
	}
}

void display(){
	for(int i = 1; i <= k; i++){
		cout << a[i];
	}
	cout << endl;
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
	for(int i = 1; i <= k; i++){
		m[i] = b[a[i]];
	}
}

bool check(){
	for(int i = 1; i < k; i++){
		if(m[i] > m[i + 1]) return false;
	}
	return true;
}

int main(){
	cin >> n >> k;
	for(int i = 1; i <= n; i++) cin >> b[i];
	ktao();
	cau_hinh_cuoi_cung = 0;
	int count = 0;
	for(int i = 1; i <= k; i++){
		m[i] = b[a[i]];
	}
	while(!cau_hinh_cuoi_cung){
		if(check()) count++;
		sinh();
	}
	cout << count << endl;
	return 0;
}
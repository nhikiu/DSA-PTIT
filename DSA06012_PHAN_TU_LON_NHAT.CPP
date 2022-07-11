#include<bits/stdc++.h>
using namespace std;

int sxgiam(int a, int b){
	return a > b;
}

void nhap(int a[], int n){
	for (int i = 0; i < n; i++){
		cin >> a[i];
	}
}

void solve(int a[], int n, int k){
	sort(a, a + n, sxgiam);
	for (int i = 0; i < k; i++) cout << a[i] << " ";
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		int a[n];
		nhap(a, n);
		solve(a, n, k);
	}
	return 0;
}
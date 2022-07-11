#include<bits/stdc++.h>
using namespace std;

int sxgiam(int a, int b){
	return a > b;
}

void nhap(int a[], int n, int b[], int m){
	int c = 0, arr[m + n];
	for (int i = 0; i < n; i++){
		cin >> a[i];
		arr[c++] = a[i];
	}
	for (int i = 0; i < m; i++){
		cin >> b[i];
		arr[c++] = b[i];
	}
	sort(arr, arr + c);
	for (int i = 0; i < c; i++) cout << arr[i] << " ";
	cout << endl;
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
		int n, m;
		cin >> n >> m;
		int a[n], b[m];
		nhap(a, n, b, m);
	}
	return 0;
}
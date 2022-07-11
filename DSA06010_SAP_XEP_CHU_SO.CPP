#include<bits/stdc++.h>
using namespace std;

void nhap(long long a[], int n){
	for	(int i = 0; i < n; i++) cin >> a[i];
}

void sx(long long a[], int n){
	int b[10] = {0};
	for (int i = 0; i < n; i++){
		while (a[i] > 0){
			int du = a[i] % 10;
			b[du]++;
			a[i] /= 10;
		}
	}
	for (int i = 0; i < 10; i++){
		if (b[i] > 0) cout << i << " ";
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		long long *a = new long long[n];
		nhap(a, n);
		sx(a, n);
		cout << endl;
	}
	return 0;
}
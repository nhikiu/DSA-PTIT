#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for	(int i = 0; i < n; i++) cin >> a[i];
}

void sxtructiep(int a[], int n){
	int b[n][n];
	for(int i = 0; i < n - 1; i++){
		for (int j = i + 1; j < n; j++){
			if (a[i] > a[j]) swap(a[i], a[j]);
		}
		for (int j = 0; j < n; j++) b[i][j] = a[j];
	}
	for (int i = n - 2; i >= 0; i--){
		cout << "Buoc " << i + 1 << ": ";
		for (int j = 0; j < n; j++){
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int *a = new int[n];
		nhap(a, n);
		sxtructiep(a, n);
	}
	return 0;
}
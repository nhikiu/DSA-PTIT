#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for	(int i = 0; i < n; i++) cin >> a[i];
}

void sx(int a[], int n){
	sort(a, a + n);
	for(int i = 0; i < n / 2; i++){
		cout << a[n - 1 - i] << " " << a[i] << " ";
	}
	if(n % 2) cout << a[n / 2];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int *a = new int[n];
		nhap(a, n);
		sx(a, n);
		cout << endl;
	}
	return 0;
}
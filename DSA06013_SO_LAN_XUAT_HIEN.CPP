#include<bits/stdc++.h>
using namespace std;

void nhap(int a[], int n){
	for	(int i = 0; i < n; i++) cin >> a[i];
}

void sx(int a[], int n, int x){
	int c = 0;
	for(int i = 0; i < n; i++){
		if(a[i] == x) c++;
	}
	(c == 0) ? cout << -1 : cout << c;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
		cin >> n >> x;
		int *a = new int[n];
		nhap(a, n);
		sx(a, n, x);
		cout << endl;
	}
	return 0;
}
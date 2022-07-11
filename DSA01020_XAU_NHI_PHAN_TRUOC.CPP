#include<bits/stdc++.h>
using namespace std;

void xuat(int a[], int n){
	for(int i = 0; i < n; i++) cout << a[i];
}

void sinh(int a[], int n) {
	int i = n - 1;
	while(i >= 0 && a[i] == 0) a[i--] = 1;
	if(i >= 0) a[i] = 0;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n = s.length();
		int a[n];
		for(int i = 0; i < n; i++) a[i] = s[i] - '0';
		sinh(a, n);
		xuat(a, n);
		cout << endl;
	}
	return 0;
}
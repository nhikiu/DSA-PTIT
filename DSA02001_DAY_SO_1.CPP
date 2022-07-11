#include<bits/stdc++.h>
using namespace std;

void dequy(int a[], int n){
	cout << "[";
	for(int i = 0; i < n - 1; i++) cout << a[i] << " ";
	cout << a[n - 1] << "]" << endl;
	for(int i = 0; i < n - 1; i++){
		a[i] = a[i] + a[i + 1];
	}
	if(n > 1) dequy(a,n-1);
}

int main(){
	int t, n, a[100];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		dequy(a, n);
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

void dequy(int a[], int n){
	vector<vector<int>> v;
	vector<int> tmp(a, a + n);
	v.push_back(tmp);
	for(int i = 0; i < n - 1; i++){
		a[i] = a[i] + a[i + 1];
	}
	if(n > 1) dequy(a,n-1);
	for(int i = v.size() - 1; i >= 0; i--){
		cout << "[";
		for(int j = 0; j < v[i].size() - 1; j++){
			cout << v[i][j] << " ";
		}
		cout << v[i][v[i].size() - 1] << "] ";
	}
}

int main(){
	int t, n, a[100];
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 0; i < n; i++) cin >> a[i];
		dequy(a, n);
		cout << endl;
	}
	return 0;
}
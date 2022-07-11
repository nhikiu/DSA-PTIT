#include<bits/stdc++.h>
using namespace std;

int solve(int a[], int n){
	int check = 0;
	for(int i = 0; i < n; i++){
		for(int j = i + 1; j < n; j++){
			if(a[j] == a[i]){
				return a[i];
			}
		}
	}
	return -1;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		if(solve(a, n) == -1) cout << "NO\n";
		else cout << solve(a, n) << endl;
	}
	return 0;
}
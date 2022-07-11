#include<bits/stdc++.h>
using namespace std;

int n, a[100000];

void nhap(){
	cin >> n;
	for(int i = 0; i < n; i++) cin >> a[i];
}

void solve(){
	int max = n;
	while(max--){
		for(int i = 0; i < n - max; i++){
			if(a[i] < a[i + max]){
				cout << max << endl;
				return;
			}
		}
	}
	cout << -1 << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		solve();
	}
	return 0;
}
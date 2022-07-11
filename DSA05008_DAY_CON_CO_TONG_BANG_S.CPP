#include<bits/stdc++.h>
using namespace std;
int f[40001], a[201], n, s;

int check(){
	memset(f, 0, sizeof(f));
	f[0] = 1;
	for(int i = 1; i <= n; i++){
		for(int j = s; j >= a[i]; j--){
			if(f[j] == 0 && f[j - a[i]] == 1){
				f[j] = 1;
			}
		}
	}
	return f[s];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> s;
		for(int i = 1; i <= n; i++) cin >> a[i];
		if(check()) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}
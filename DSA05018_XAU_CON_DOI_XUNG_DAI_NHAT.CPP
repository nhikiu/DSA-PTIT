#include<bits/stdc++.h>
using namespace std;

int f[1001][1001];

int solve(string s){
	int ans = 1, n = s.length();
	memset(f, 0, sizeof(f));
	for(int i = 0; i < n; i++){
		f[i][i] = 1;
	}
	for(int k = 1; k < n; k++){
		for(int i = 0; i < n - k; i++){
			int j = i + k;
			if(s[i] == s[j]){
				if(k > 1) f[i][j] = f[i + 1][j - 1];
				else if(k == 1) f[i][j] = 1;
			}
			else f[i][j] = 0;
			if(f[i][j] == 1) ans = max(ans, j - i + 1);
		}
	}
	return ans;
}

int main(){
	int t;
	string s;
	cin >> t;
	while(t--){
		cin >> s;
		cout << solve(s) << endl;
	}
	return 0;
}
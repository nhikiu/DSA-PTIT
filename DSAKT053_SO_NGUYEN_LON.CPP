#include<bits/stdc++.h>
using namespace std;

int c[1001][1001];

int qhd(string s1, string s2){
	memset(c, 0, sizeof(c));
	int n = s1.length(), m = s2.length();
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			if(s1[i - 1] == s2[j - 1]) c[i][j] = c[i - 1][j - 1] + 1;
			else c[i][j] = max(c[i - 1][j], c[i][j - 1]);
		}
	}
	return c[n][m];
}

int main(){
	int t;
	string s1, s2;
	cin >> t;
	while(t--){
		cin >> s1 >> s2;
		cout << qhd(s1, s2) << endl;
	}
	return 0;
}
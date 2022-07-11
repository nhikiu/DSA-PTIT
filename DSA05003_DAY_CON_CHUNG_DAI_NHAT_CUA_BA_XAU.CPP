#include<bits/stdc++.h>
using namespace std;

int c[101][101][101], n, m, p;

int qhd(string s1, string s2, string s3){
	memset(c, 0, sizeof(c));
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			for(int k = 1; k <= p; k++){
				if(s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) c[i][j][k] = c[i - 1][j - 1][k - 1] + 1;
				else c[i][j][k] = max(c[i - 1][j][k], max(c[i][j - 1][k], c[i][j][k - 1]));
			}
		}
	}
	return c[n][m][p];
}

int main(){
	int t;
	string s1, s2, s3;
	cin >> t;
	while(t--){
		cin >> n >> m >> p;
		cin >> s1 >> s2 >> s3;
		cout << qhd(s1, s2, s3) << endl;
	}
	return 0;
}
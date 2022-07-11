#include<bits/stdc++.h>
using namespace std;

int n = 8, x[50], cot[50], d1[50], d2[50], a[50][50], ans;

int tong(){
	int sum = 0;
	for(int i = 1; i <= n; i++){
		sum += a[i][x[i]];
	}
	return sum;
}

void backtrack(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1){
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
			x[i] = j;
			if(i == n){
				ans = max(ans, tong());
			}
			else backtrack(i + 1);
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				cin >> a[i][j];
			}
		}
		for(int i = 1; i <= 50; i++){
			cot[i] = d1[i] = d2[i] = 1;
		}
		ans = 0;
		backtrack(1);
		cout << ans << endl;
	}
	return 0;
}
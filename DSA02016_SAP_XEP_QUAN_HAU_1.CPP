#include<bits/stdc++.h>
using namespace std;

int n, x[50], cot[50], d1[50], d2[50], dem;

void backtrack(int i){
	for(int j = 1; j <= n; j++){
		if(cot[j] == 1 && d1[i - j + n] == 1 && d2[i + j - 1] == 1){
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 0;
			x[i] = j;
			if(i == n) ++dem;
			else backtrack(i + 1);
			cot[j] = d1[i - j + n] = d2[i + j - 1] = 1;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i = 1; i <= 50; i++){
			cot[i] = d1[i] = d2[i] = 1;
		}
		dem = 0;
		backtrack(1);
		cout << dem << endl;
	}
	return 0;
}
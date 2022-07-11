#include<bits/stdc++.h>
using namespace std;

int n, m, a[101][101], dem;

void nhap(){
	cin >> n >> m;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
}

void backtrack(int i, int j){
	if(i == n && j == m){
		dem++;
		return;
	}
	//di xuong Down-D
	if(i + 1 <= n){
		backtrack(i + 1, j);
	}
	//di sang phai Right-R
	if(j + 1 <= m){
		backtrack(i, j + 1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		dem = 0;
		backtrack(1, 1);
		cout << dem << endl;
	}
	return 0;
}
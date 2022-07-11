#include<bits/stdc++.h>
using namespace std;

int n, k, a[10][10], check;
char c[101];

void nhap(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> a[i][j];
		}
	}
}

void display(char c[], int n){
	for(int i = 1; i <= n; i++){
		cout << c[i];
	}
	cout << " ";
}

void backtrack(int i, int j, int k){
	if(i == n && j == n){
		display(c, k - 1);
		check = 1;
		return;
	}
	//di xuong Down-D
	if(i + 1 <= n && a[i + 1][j] == 1){
		c[k] = 'D';
 		a[i + 1][j] = 0;
		backtrack(i + 1, j, k + 1);
		a[i + 1][j] = 1;
	}
	//di sang trai Left-L
	if(j - 1 >= 1 && a[i][j - 1] == 1){
		c[k] = 'L';
		a[i][j - 1] = 0;
		backtrack(i, j - 1, k + 1);
		a[i][j - 1] = 1;
	}
	//di sang phai Right-R
	if(j + 1 <= n && a[i][j + 1] == 1){
		c[k] = 'R';
		a[i][j + 1] = 0;
		backtrack(i, j + 1, k + 1);
		a[i][j + 1] = 1;
	}
	//di len tren Up-U
	if(i - 1 >= 1 && a[i - 1][j] == 1){
		c[k] = 'U';
		a[i - 1][j] = 0;
		backtrack(i - 1, j, k + 1);
		a[i - 1][j] = 1;
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		check = 0;
		if(a[1][1] == 1 && a[n][n] == 1){
			a[1][1] = 0;
			backtrack(1, 1, 1);
		}
		if(!check) cout << -1;
		cout << endl;
	}
	return 0;
}
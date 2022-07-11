#include<bits/stdc++.h>
using namespace std;

int n, C[20][20], a[20], b[20] = {0}, Fopt = 1e9, Cmin = 1e9, cost = 0;
void quaylui(int i){
	for(int j = 2; j <= n; j++){
		if(b[j] == 0){
			a[i] = j;
			b[j] = 1;
			cost += C[a[i - 1]][a[i]];
			if(i == n){
				int v = cost + C[a[n]][a[1]];
				Fopt = min(Fopt, v);
			}
			else if(cost + (n - i + 1) * Cmin < Fopt) quaylui(i + 1);
			cost -= C[a[i - 1]][a[i]];
			b[j] = 0;
		}
	}
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> C[i][j];
			if(i != j) Cmin = min(Cmin, C[i][j]);
		}
	}
	a[1] = 1;
	quaylui(2);
	cout << Fopt << endl;
	return 0;
}
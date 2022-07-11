#include<bits/stdc++.h>
using namespace std;

int n, KlgMax, Klg[100], gtri[100], Fopt;
vector<int> Xopt, a;

void nhap(){
	cin >> n >> KlgMax;
	a.resize(n);
	for(int i = 0; i < n; i++) cin >> gtri[i];
	for(int i = 0; i < n; i++) cin >> Klg[i];
}

void backtrack(int i, int sumKlg, int sumGtri){
	if(i == n && sumGtri > Fopt && sumKlg <= KlgMax){
		Fopt = sumGtri;
		Xopt = a;
	}
	else if(i < n && sumKlg <= KlgMax){
		a[i] = 0;
		backtrack(i + 1, sumKlg, sumGtri);
		a[i] = 1;
		backtrack(i + 1, sumKlg + Klg[i], sumGtri + gtri[i]);
	}
}

int main(){
	nhap();
	backtrack(0, 0, 0);
	cout << Fopt << endl;
	for(int i = 0; i < n; i++){
		cout << Xopt[i] << " ";
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int n, a[100];

void ktao(){
	cin >> n;
	for(int i = 0; i < n; i++){
		a[i] = i + 1;
	}
}

void display(){
	for(int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << endl;
}

bool check(){
	for(int i = 1; i < n; i++){
		if(abs(a[i] - a[i - 1]) == 1) return false;
	}
	return true;
}

void solve(){
	do{
		if(check()) display();
	}while(next_permutation(a, a + n));
}

int main(){
	int t;
	cin >> t;
	while(t--){
		ktao();
		solve();
	}
	return 0;
}
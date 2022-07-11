#include<bits/stdc++.h>
using namespace std;

int n, a, b;

void solve(){
	cin >> n;
	int sum = 1;
	for(int i = 1; i <= n; i++){
		sum *= 2;
	}
	string s[sum + 1];
	s[1] = "0";
	s[2] = "1";
	if(n > 1){
		a = 2;
		for(int i = 2; i <= n; i++){
			b = 1;
			for(int j = 1; j <= i; j++){
				b *= 2;
			}
			for(int j = 1; j <= a; j++){
				s[b - j + 1] = "1" + s[j];
				s[j] = "0" + s[j];
			}
			a = b;
		}
	}
	for(int i = 1; i <= sum; i++){
		cout << s[i] << " ";
	}
	cout << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	return 0;
}
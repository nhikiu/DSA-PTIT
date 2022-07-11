#include<bits/stdc++.h>
using namespace std;

int n, k, a[100];

void First(){
	for (int i = 0; i < n; i++){
		a[i] = 0;
	}
}

void display(){
	for (int i = 0; i < n; i++){
		cout << a[i];
	}
	cout << endl;
}

void solve(){
	First();
	for (int i = n - 1; i >= 0; i--){
		int count = 0;
		if(a[i] == 0){
			a[i] = 1;
			for (int j = i + 1; j < n; j++) a[j] = 0;
			for (int j = 0; j < n; j++){
				if(a[j] == 1) count++;
			}
			if(count == k) display();
			i = n;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
		solve();
	}
	return 0;
}


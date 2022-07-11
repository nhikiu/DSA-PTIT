#include<bits/stdc++.h>
using namespace std;

int n;
char a[100];

void First(){
	for (int i = 0; i < n; i++){
		a[i] = 'A';
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
		bool check = true;
		if(a[i] == 'A'){
			a[i] = 'H';
			for (int j = i + 1; j < n; j++) a[j] = 'A';
			for (int j = 0; j < n - 1; j++){
				if (a[j] == 'H' && a[j + 1] == 'H'){
					check = false;
					break;
				}
			}
			if(check && a[0] == 'H' && a[n - 1] == 'A') display();
			i = n;
		}
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		solve();
	}
	return 0;
}
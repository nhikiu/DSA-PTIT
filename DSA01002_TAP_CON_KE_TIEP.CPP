#include<bits/stdc++.h>
using namespace std;

int n, k, a[1001];

void nhap(){
	cin >> n >> k;
	for (int i = 1; i <= k; i++){
		cin >> a[i];
	}
}

void sinh(){
	int i = k;
	while(i >= 1 && a[i] == n - k + i){
		i--;
	}
	if(i >= 1){
		a[i]++;
		for (int j = i + 1; j <= k; j++){
			a[j] = a[j - 1] + 1;
		}
	}
}

void display(){
	for (int i = 1; i <= k; i++){
		cout << a[i] << " ";
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		nhap();
		sinh();
		display();
		cout << endl;
	}
	return 0;
}


#include<bits/stdc++.h>
using namespace std;

int n, k;
char c, a[100];

void inkq(){
	for(int i = 1; i <= k; i++){
		cout << a[i];
	}
	cout << endl;
}

void back_track(int i, char ch){
	for(char j = ch; j <= c; j++){
		a[i] = j;
		if(i == k) inkq();
		else back_track(i + 1, j);
	}
}

int main(){
	cin >> c >> k;
	n = strlen(a);
	back_track(1, 'A');
	return 0;
}
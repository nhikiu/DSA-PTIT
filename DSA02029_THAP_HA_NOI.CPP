#include<bits/stdc++.h>
using namespace std;

int n;
char A, B, C;

void backtrack(int i, char A, char B, char C){
	if(i == 1){
		cout << A << " -> " << C << endl;
		return;
	}
	backtrack(i - 1, A, C, B);
	backtrack(1, A, B, C);
	backtrack(i - 1, B , A, C);
}

int main(){
	cin >> n;
	backtrack(n, 'A', 'B', 'C');
	return 0;
}
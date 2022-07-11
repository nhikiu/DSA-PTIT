#include<bits/stdc++.h>
using namespace std;

#define modulo 1000000007
#define matrix vector<vector<long long>>

int n, k;
matrix m;

matrix nhan2matran(matrix a, matrix b){
    int len = a.size();
	matrix c(len, vector<long long>(len, 0));
	for(int i = 0; i < len; i++){
		for(int j = 0; j < len; j++){
			for(int k = 0; k < len; k++){
				c[i][j] += a[i][k] * b[k][j];
                c[i][j] %= modulo;
			}
		}
	}
    return c;
}

matrix solve(matrix a, int k){
    if(k == 1) return a;
    else if(k >= 2){
        matrix ans = solve(a, k / 2);
        if(k % 2 == 0) return nhan2matran(ans, ans);
        else return nhan2matran(a, nhan2matran(ans, ans));
    }
}

int main(){
	int t;
	cin >> t;
	while(t--){
	    cin >> n >> k;
	    m.assign(n, vector<long long> (n));
	    for(auto &i : m){
	        for(auto & j : i){
	            cin >> j;
	        }
	    }
	    matrix answer = solve(m, k);
			for(int i = 0; i < n; i++){
					for(int j = 0; j < n; j++){
	        		cout << answer[i][j] << " ";
	    		}
					cout << endl;
			}
	}
	return 0;
}
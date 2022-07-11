#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
#define matrix vector<vector<long long>>

matrix matrix_multiply (matrix a, matrix b) {
  matrix c(2, vector<long long>(2, 0));
  for(int i = 0; i <= 1; i++){
    for(int j = 0; j <= 1; j++){
      for(int k = 0; k <= 1; k++){
        c[i][j] += a[i][k] * b[k][j];
        c[i][j] %= mod;
      }
    }
  }
  return c;
}

long long n;
matrix fibo = {{1, 1}, {1, 0}};
matrix identity_matrix = {{1, 0}, {0, 1}};

matrix exponential (long long k) {
  if (k == 0) return identity_matrix;
  matrix x = exponential(k/2);
  matrix temp = matrix_multiply(x, x);
  if (k%2 == 0)   return temp;
  else     return matrix_multiply(fibo, temp);
}

int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> n;
    matrix res = exponential(n);
    cout << res[1][0] << endl;
  }
  return 0;
}
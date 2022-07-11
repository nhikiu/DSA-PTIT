#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

vector<long long> fibo {0, 1, 1};
long long n, k;

void fibonacciVector(){
  for(int i = 3; i <= 92; i++) fibo.push_back(fibo[i-1] + fibo[i-2]);
}

void solve(){
  if (n <= 2) cout << (char)('A' + n - 1) << endl;
  else{
    if (k > fibo[n-2]){
      k -= fibo[n-2];
      n--;
    }
    else n -= 2;
    solve();
  }
}

int main(){
  fibonacciVector();
  int t;
  cin >> t;
  while(t--){
    cin >> n >> k;
    solve();
  }
  return 0;
}
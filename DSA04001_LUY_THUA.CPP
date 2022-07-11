#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

long long exponentiation (long long n, long long k) {
    if (k == 0) return 1;
    else {
        long long val = exponentiation(n, k/2) % mod;
        if (k%2 == 0)   return val * val % mod;
        else    return ((val * n) % mod * val) % mod;
    }
}
void solve() {
    long long n, k;
    cin >> n >> k;
    cout << exponentiation(n, k) << endl;
}

int main(){
  int t; cin >> t;
  while(t--)
    solve();
  return 0;
}
#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
long long n;

long long exponentiation (long long n, long long k) {
    if (k == 0) return 1;
    long long val = exponentiation(n, k/2) % mod;
    if (k%2 == 0)   return val * val % mod;
    else    return ((val * val) % mod * n) % mod;
}

void solve() {
    cin >> n;
    long long m = n, r = 0;
    while (m != 0) {
        r = r*10 + m%10;
        m /= 10;
    }
    cout << exponentiation(n, r) << endl;
}

int main(){
  int t; cin >> t;
  while(t--)
    solve();
  return 0;
}
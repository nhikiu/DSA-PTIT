#include<bits/stdc++.h>
using namespace std;
const long long mod = 123456789;

long long n;

long long divide(long long n){
  if (n==0)   return 1;
  long long x = divide(n/2) % mod;
  if (n%2 == 0)   return (x * x) % mod;
  else    return ((x * x % mod) * 2) % mod;
}
void solve(){
  cin >> n;
  cout << divide(n-1) << endl;
}

int main(){
  int t; cin >> t;
  while(t--)
    solve();
  return 0;
}
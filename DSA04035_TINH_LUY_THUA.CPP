#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9 + 7;
long long a, b;

long long divide(long long a, long long b){
  if (b == 0) return 1;
  long long x = divide(a, b/2) % mod;
  if (b%2 == 1)   return ((x * x % mod) * a) % mod;
  else    return (x * x) % mod;
}

int main () {
  cin >> a >> b;
  while(a != 0 || b != 0){
    cout << divide (a, b) << endl;
    cin >> a >> b;
  }
  return 0;
}
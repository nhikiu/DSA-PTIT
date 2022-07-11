#include<bits/stdc++.h>
using namespace std;

string a, b;

void solve(){
  cin >> a >> b;
  replace(a.begin(), a.end(), '5', '6');
  replace(b.begin(), b.end(), '5', '6');
  long long Max = stoll(a) + stoll(b);
  replace(a.begin(), a.end(), '6', '5');
  replace(b.begin(), b.end(), '6', '5');
  long long Min = stoll(a) + stoll(b);
  cout << Min << " " << Max << endl;
}

int main(){
  solve();
  return 0;
}
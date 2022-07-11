#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

int n;
vector<pair<int, int>> a;

void solve(){
  cin >> n;
  a.assign(n, {0, 0});
  for (auto &i:a) cin >> i.first >> i.second;
  stable_sort(a.begin(), a.end());
  int rem = a[0].second, cou = 1;
  for(int i = 0; i < n; i++){
    if(a[i].first >= rem) {
      ++cou;
      rem = a[i].second;
    }
    else rem = min (rem, a[i].second);
  }
  cout << cou << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    solve();
  }
  return 0;
}
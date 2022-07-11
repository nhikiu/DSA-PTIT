#include<bits/stdc++.h>
using namespace std;

int n;
vector<pair<int, int>> a;

void solve(){
    cin >> n;
    int cou = 1;
    a.assign(n, {0, 0});
    for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    int rem = a[0].second;
    for(int i = 0; i < n; i++){
      if(a[i].first >= rem){
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
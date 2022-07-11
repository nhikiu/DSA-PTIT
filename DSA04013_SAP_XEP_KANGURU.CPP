#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void input(){
  cin >> n;
  a.assign(n, 0);
  for (auto &i:a) cin >> i;
}

void solve(){
  sort(a.begin(), a.end());
  int cou = n, r = n - 1, l = n/2 - 1;
  while (l >= 0 && r >= n/2) {
    if (a[r] >= a[l] * 2)
      --cou, --r, --l;
    else --l;
  }
  cout << cou << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    input();
    solve();
  }
  return 0;
}
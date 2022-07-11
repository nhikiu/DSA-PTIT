#include<bits/stdc++.h>
using namespace std;

int n, m, k;
vector<int> a, b;

void input () {
  cin >> n >> m >> k;
  a.assign(n, 0);
  b.assign(m, 0);
  for (auto &i:a) cin >> i;
  for (auto &i:b) cin >> i;
}

void merge () {
  vector<int> res;
  int la = 0, lb = 0, i = 0;
  while (la < n && lb < m) {
    if (a[la] >= b[lb])  res.push_back(b[lb++]);
    else    res.push_back(a[la++]);
  }
  while (la < a.size())   res.push_back(a[la++]);
  while (lb < b.size())   res.push_back(b[lb++]);
  cout << res[k-1] << endl;
}

int main () {
  int t;
  cin >> t;
  while(t--){
    input();
    merge();
  }
  return 0;
}
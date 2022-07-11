#include<bits/stdc++.h>
using namespace std;

vector<int> a;
int n, k;

void input(){
  cin >> n >> k;
  a.resize(n);
  for (auto &i:a) cin >> i;
}

int binarySearch(int val, int l, int r){
  if (l <= r) {
    int mid = (l+r) / 2;
    if (val == a[mid])  return mid+1;
    else if (val < a[mid])  return binarySearch(val, l, mid-1);
    else return binarySearch(val, mid+1, r);
  }
  return -1;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    input();
    int res = binarySearch(k, 0, n-1);
    res != -1 ? cout << res << endl : cout << "NO\n";
    a.clear();
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int n;

void solve(){
  cin >> n;
  int index;
  map<int, int> a;
  while (n--) {
    cin >> index;
    a[index]++;
    if (a[index] == 1)  cout << index << " ";
  }
}

int main(){
  solve();
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

int k;
string a, b;

void changeSize (string &s, long long size) {
  while (s.size() < size)
    s = "0" + s;
}

void add (string a, string b) {
  long long size = max(a.size(), b.size());
  changeSize(a, size), changeSize(b, size);
  string res (size, '0');
  int s, rem = 0;
  for(int i = size - 1; i >= 0; i--){
    s = (a[i] - '0') + (b[i] - '0') + rem;
    if (s >= k) {
      rem = s / k;
      s %= k;
    }
    else rem = 0;
    res[i] = (char) (s + '0');
  }
  if(rem) res = (char)(rem + '0') + res;
  cout << res << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> k >> a >> b;
    add(a, b);
  }
  return 0;
}
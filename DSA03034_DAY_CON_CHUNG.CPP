#include<bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

int n, m, k;
vector<long long> a, b, c;

vector<long long> matching (vector<long long> a, vector<long long> b) {
    vector<long long> x;
    int la = 0, lb = 0;
    while (la < a.size() && lb < b.size()) {
        if (a[la] == b[lb]) {
            x.push_back(a[la]);
            ++la, ++lb;
        }
        else if (a[la] > b[lb]) ++lb;
        else    ++la;
    }
    return x;
}

void input () {
    cin >> n >> m >> k;
    a.assign(n, 0);
    b.assign(m, 0);
    c.assign(k, 0);
    for (auto &i:a) cin >> i;
    for (auto &i:b) cin >> i;
    for (auto &i:c) cin >> i;
}

void solve () {
    vector<long long> res = matching(matching(a, b), matching(b, c));
    if (res.empty()) cout << "NO";
    else
        for (auto i:res)    cout << i << " ";
    cout << endl;
}

int main(){
  int t; cin >> t;
  while(t--){
    input();
    solve();
  }
  return 0;
}
#include<bits/stdc++.h>
using namespace std;

stack<int> st;

void solve(){
  string s;
  int n;
  cin >> s;
  if(s == "PUSH"){
    cin >> n;
    st.push(n);
  }
  else if(s == "POP" && !st.empty()){
    st.pop();
  }
  else if(s == "PRINT"){
    if(!st.empty()) cout << st.top() << endl;
    else cout << "NONE\n";
  }
}

int main(){
  int t;
  cin >> t;
  while(t--)
    solve();
  return 0;
}
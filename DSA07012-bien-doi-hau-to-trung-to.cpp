#include<bits/stdc++.h>
using namespace std;

void solve(string s){
  int n = s.length();
  stack<string> st;
  for(int i = 0; i < n; i++){
    if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
      string op2 = st.top();
      st.pop();
      string op1 = st.top();
      st.pop();
      string result = "(" + op1 + s[i] + op2 + ")";
      st.push(result);
    }
    else{
      st.push(string(1, s[i]));
    }
  }
  cout << st.top() << endl;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    string s;
    cin >> s;
    solve(s);
  }
  return 0;
}
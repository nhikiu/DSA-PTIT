#include<bits/stdc++.h>
using namespace std;

void solve(string s){
  int n = s.length();
  stack<char> st;
  for(int i = 0; i < n; i++){
    if(s[i] != ')'){
      st.push(s[i]);
    }
    else{
      string str;
      while(st.top() != '('){
        str = st.top() + str;
        st.pop();
      }
      st.pop();
      if(!st.empty() && st.top() == '-'){
        for(int j = 0; j < str.length(); j++){
          if(str[j] == '+') str[j] = '-';
          else if(str[j] == '-') str[j] = '+';
          st.push(str[j]);
        }
      }
      else{
        for(int j = 0; j < str.length(); j++){
          st.push(str[j]);
        }
      }
    }
  }
  string result = "";
  while(!st.empty()){
    result = st.top() + result;
    st.pop();
  }
  cout << result << endl;
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
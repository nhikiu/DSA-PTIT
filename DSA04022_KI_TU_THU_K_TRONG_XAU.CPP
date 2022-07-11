#include<bits/stdc++.h>
using namespace std;

long long n, k;

void devide(int n){
  long long pivot = 1 << (n - 1);
  if (k == pivot){
    cout << (char) ('A' + n - 1) << endl;
    return;
  }
  else{
    if (k > pivot){
      k -= pivot;
    }
    devide (n - 1);
  }
}

int main(){
  int t;
  cin >> t;
  while(t--){
    cin >> n >> k;
    devide(n);
  }
  return 0;
}
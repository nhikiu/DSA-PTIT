#include<bits/stdc++.h>
using namespace std;

vector<long long> fibo;
long long n, k;

void fiboArray(){
  fibo.assign({0, 1, 1});
  for(int i = 3; i <= 92; i++)
    fibo.push_back(fibo[i-1] + fibo[i-2]);
}


void devide(long long pos, long long i){
  if (i == 1) cout << "0\n";
  else if (i == 2)  cout << "1\n";
  else {
    if (pos <= fibo[i-2])  devide(pos, i-2);
    else    devide(pos - fibo[i-2], i-1);
  }
}

int main(){
  fiboArray();
  int t;
  cin >> t;
  while(t--){
    cin >> n >> k;
    devide(k, n);
  }
  return 0;
}
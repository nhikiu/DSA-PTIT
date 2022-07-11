#include<bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100], cau_hinh_cuoi_cung;

void khoi_tao(){
  a[1] = 8;
  for (int i = 2; i <= n; i++){
    a[i] = 6;
  }
}

void sinh(){
  int i = n - 1;
  while(i >= 2 && a[i] == 8){
    a[i] = 6;
    i--;
  }
  if(i == 1){
    cau_hinh_cuoi_cung = 1;
  }
  else{
    a[i] = 8;
  }
}

int check8(){
  for (int i = 1; i < n; i++){
    if(a[i] == 8 && a[i + 1] == 8){
      return 1;
    }
  }
  return 0;
}

int check6(){
  for (int i = 1; i < n - 2; i++){
    if(a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6 && a[i + 3] == 6){
      return 1;
    }
  }
  return 0;
}

void display(){
  for(int i = 1; i <= n; i++){
    cout << a[i];
  }
  cout << endl;
}

int main(){
  cin >> n;
  cau_hinh_cuoi_cung = 0;
  khoi_tao();
  while(!cau_hinh_cuoi_cung){
      if(!check8() && !check6()) display();
      sinh();
  }
	return 0;
}

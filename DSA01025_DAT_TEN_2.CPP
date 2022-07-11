#include<bits/stdc++.h>
using namespace std;

int n, k, b[100], cau_hinh_cuoi_cung;

void khoi_tao(){
    for (int i = 1; i <= k; i++){
        b[i] = i;
    }
}


void sinh(){
    int i = k;
    while(i >= 1 && b[i] == n - k + i){
        i--;
    }
    if(i == 0){
        cau_hinh_cuoi_cung = 1;
    }
    else{
        b[i]++;
        for (int j = i + 1; j <= k; j++){
            b[j] =  b[j - 1] + 1;
        }
    }
}

void display(){
    for (int i = 1; i <= k; i++){
        cout << (char) (b[i] - 1 + 'A');
    }
    cout << endl;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        cau_hinh_cuoi_cung = 0;
        cin >> n >> k;
        cin.ignore();
        khoi_tao();
        while(!cau_hinh_cuoi_cung){
            display();
            sinh();
        }
    }


	return 0;
}

#include<bits/stdc++.h>

using namespace std;

int solve(int a[], int n, int i) {
  int t = a[i];
  for (int j = 0; j < i; j++) {
    if (t == a[j]) return 0;
  }
  return 1;
}

int main()
{
  int t, n;
  cin >> t;
  while(t--) {
    cin >> n;
    int a[n], b[n], k = 0;
    for (int i = 0; i < n; i++)  cin >> a[i];

    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
      if (solve(a, n, i)) b[k++] = a[i];
    }

    cout << b[k - 1] - b[0] + 1 - k << endl;
  }
  return 0;
}
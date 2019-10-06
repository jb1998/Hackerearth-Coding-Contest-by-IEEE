#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  //cin.ignore();

  int n;
  cin>>n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin>>a[i];
  }
  sort(a,a+n,greater<int>());
  long ans = 0;
  for (int i = 0; i < n; i++) {
    ans+=pow(2,i)*a[i];
  }
  cout << ans << '\n';

  return 0;
}

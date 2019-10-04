#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
  //cin.ignore();
  int q=1;
  cin>>q;
  for (int k = 1; k <= q; k++) {
    int n;
    cin >> n;
    long a[n]={0}, ans[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    ans[0]=a[0];
    for (int i = 1; i < n; i++) {
      if (i>=2) ans[i]=max(ans[i-1],ans[i-2]+a[i]);
      else ans[i]=max(ans[i-1],a[i]);
    }
    cout << "Case " << k << ": " << ans[n-1] <<'\n';
  }
  return 0;
}

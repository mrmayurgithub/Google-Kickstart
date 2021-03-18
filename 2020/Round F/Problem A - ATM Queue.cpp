#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  auto solve = [&] () {
    int n, x;
    cin >> n >> x;
    vector <int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector <pair <int, int> > q;
    for (int i = 0; i < n; i++) {
      q.push_back({(a[i] + x - 1) / x, i});
    }
    sort(q.begin(), q.end());
    vector <int> ord(n);
    for (int i = 0; i < n; i++) ord[i] = q[i].second;
    for (int t : ord) cout << t + 1 << ' ';
  };
  for (int tc = 1; tc <= t; tc++) {
    cout << "Case #" << tc << ": ";
    solve();
    cout << '\n';
  }
}

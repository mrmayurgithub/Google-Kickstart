#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	cin >> n >> k;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
	}
	int ans=0;
	int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] == a[i-1]-1)
        cnt++;
        else
        cnt=0;
        if(a[i]==1 && cnt>=k-1)
        ans++;
    }
	cout << ans << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	for(int i=1; i<=t; ++i) {
		cout << "Case #" << i << ": ";
		solve();
	}
}
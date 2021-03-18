#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

const int mxN=2e5;
int n, a[mxN], k;

void solve() {
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
	}
	if(n==2)
	{
	    cout<<"2\n";
	    return;
	}
    int cnt=1;
    int ans=0;
    int diff = a[1]-a[0];
    for(int i=2; i<n ;i++)
    {
        if(a[i]-a[i-1]==diff)
        cnt++;
        else
         { 
             cnt=1;
             diff = a[i]-a[i-1];
         }
        if(cnt > ans)
        ans = cnt;
    }
    cout<<ans+1<<"\n";
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
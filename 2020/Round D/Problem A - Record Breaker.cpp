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
	if(n==1)
	{
	    cout<<1<<"\n";
	    return;
	}
	int max = INT_MIN;
	int cnt=0;
	for(int i=0; i<n-1; i++)
	{
	    if(max < a[i] && a[i] > a[i+1])
	        cnt++;
	    
	    if(max < a[i])
	    max = a[i];
	}
	if(a[n-1] >max)
	cnt++;
	cout<<cnt<<"\n";
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
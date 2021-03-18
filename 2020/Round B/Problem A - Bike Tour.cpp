#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
 int t;
    cin >> t;
    int m=t;
    while (t--) {
      int n;
      cin>>n;
      int a[n];
      for(auto &z:a) cin>>z;
        int cnt=0;
      for(auto i=1; i<n-1 ;i++)
      {
        if(a[i-1] < a[i] && a[i+1] < a[i])
            cnt++;
      }
      cout<<"Case #"<<m-t<<": "<<cnt<<"\n";
    }
	return 0;
}
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
string s;
int n;
cin>>n;
cin>>s;
int dp[n];
dp[0]=1;
cout<<dp[0]<<" ";
for(int i=1; i<n; i++){
    if(s[i]>s[i-1]){
        dp[i]=(dp[i-1]+1);
    }
    else{
        dp[i]=1;
    }
       cout<<dp[i]<<" ";
}
}

int main()
{
    std::ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    int m=t;
    while (m--)
    {
        cout<<"Case #"<<t-m<<": ";
        solve();
        cout<<"\n";
    }
    return 0;
} 
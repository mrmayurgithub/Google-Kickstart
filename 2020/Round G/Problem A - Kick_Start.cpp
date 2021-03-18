#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
string s;
cin>>s;
string k = "KICK";
string st = "START";
ll a1=0,a2=0;
int size=s.length(),s1=k.length(),s2=st.length();
for(int i=0; i<size; i++)
{
    if(i+1>=s1 && s.substr(i+1-s1,s1)==k)
    ++a2;
    if(i+1>=s2 && s.substr(i+1-s2,s2)==st)
    a1+=a2;
}
cout<<a1<<"\n";
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
#include<bits/stdc++.h>
using namespace std;
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int t;
cin>>t;
int m=t;
while(m--){
long long n,k,s;
cin>>n>>k>>s;
cout<<"Case #"<<t-m<<": "<<min((n+k),(k + 2*(k-s) + n-k))<<"\n";
}
return 0;
}
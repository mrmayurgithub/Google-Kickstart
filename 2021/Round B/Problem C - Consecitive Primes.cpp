	#include "bits/stdc++.h"
	using namespace std;
	#define pb                push_back
	#define ppb               pop_back
	#define pf                push_front
	#define ppf               pop_front
	#define all(x)            (x).begin(),(x).end()
	#define uniq(v)           (v).erase(unique(all(v)),(v).end())
	#define sz(x)             (int)((x).size())
	#define fr                first
	#define sc                second
	#define pii               pair<int,int>
	#define rep(i,a,b)        for(int i=a;i<b;i++)
	#define mem1(a)           memset(a,-1,sizeof(a))
	#define mem0(a)           memset(a,0,sizeof(a))
	#define ppc               __builtin_popcount
	#define ppcll             __builtin_popcountll

	template<typename T1,typename T2>istream& operator>>(istream& in,pair<T1,T2> &a){in>>a.fr>>a.sc;return in;}
	template<typename T1,typename T2>ostream& operator<<(ostream& out,pair<T1,T2> a){out<<a.fr<<" "<<a.sc;return out;}
	template<typename T,typename T1>T amax(T &a,T1 b){if(b>a)a=b;return a;}
	template<typename T,typename T1>T amin(T &a,T1 b){if(b<a)a=b;return a;}

	const long long INF=1e18;
	const int32_t M=1e9+7;
	const int32_t MM=998244353;

	#define MAXSIEVE 1000000010 // All prime numbers up to this 
	#define MAXSIEVEHALF (MAXSIEVE/2) 
	#define MAXSQRT 16000 // sqrt(MAXSIEVE)/2 
	char a[MAXSIEVE/16+2]; 
	#define isprime(n) (a[(n)>>4]&(1<<(((n)>>1)&7))) // Works when n is odd 

	//have to check for even numbers
	void sieve()
	{
		int i,j; 
		memset(a,255,sizeof(a)); 
		a[0]=0xFE; 
		for(i=1;i<MAXSQRT;i++) 
			if (a[i>>3]&(1<<(i&7))) 
				for(j=i+i+i+1;j<MAXSIEVEHALF;j+=i+i+1) 
					a[j>>3]&=~(1<<(j&7));
	}


	void solve(int test){
		cout << "Case #" << test << ": ";
		long long z;
		cin >> z;
		if(z < 15){
			cout << 6 << "\n";
			return;
		}
		
		int sqz = sqrt(z);
		while(sqz * 1ll * sqz < z){
			sqz++;
		}
		while(sqz * 1ll * sqz > z){
			sqz--;
		}
		
		int p = sqz;
		if(p % 2 == 0) p--;
		while(!isprime(p)){
			p -= 2;
		}
		
		int q = p - 2;
		int r = p + 2;
		while(q > 1 && !isprime(q)){
			q -= 2;
		}
		
		while(!isprime(r)){
			r += 2;
		}
		
		
		if(1ll * p * r <= z){
			cout << 1ll * p * r;
		}
		else{
			cout << 1ll * p * q;
		}
		
		cout << "\n";
	}
	signed main(){
		ios_base::sync_with_stdio(false);
		cin.tie(0);cout.tie(0);
			sieve();
		int t=1;
		cin>>t;
		rep(i,1,t+1) solve(i);
		return 0;
	}
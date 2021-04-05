#include "bits/stdc++.h"
using namespace std;
#define int               long long
#define rep(i,a,b)        for(int i=a;i<b;i++)

void solve(){
	int r,c;
	cin >> r >> c;
	vector<vector<int>> v(r,vector<int>(c));
	vector<vector<int>> left(r,vector<int>(c));
	vector<vector<int>> right(r,vector<int>(c));
	vector<vector<int>> up(r,vector<int>(c));
	vector<vector<int>> down(r,vector<int>(c));
	
	rep(i,0,r){
		rep(j,0,c){
			cin >> v[i][j];
		}
	}
	
	rep(i,0,r){
		rep(j,0,c){
			left[i][j] = v[i][j];
			if(j && v[i][j]){
				left[i][j] += left[i][j - 1];
			}
		}
	}
	rep(j,0,c){
		rep(i,0,r){
			up[i][j] = v[i][j];
			if(i && v[i][j]){
				up[i][j] += up[i - 1][j];
			}
		}
	}
	
	rep(i,0,r){
		for(int j = c - 1; j >= 0; j--){
			right[i][j] = v[i][j];
			if(j < c - 1 && v[i][j]){
				right[i][j] += right[i][j + 1];
			}
		}
	}
	
	rep(j,0,c){
		for(int i = r - 1; i >= 0; i--){
			down[i][j] = v[i][j];
			if(i < r - 1 && v[i][j]){
				down[i][j] += down[i + 1][j];
			}
		}
	}
	
	int ans = 0;
	rep(i,0,r){
		rep(j,0,c){
			if(up[i][j] > 1){
				if(right[i][j] > 2)
				ans += min(up[i][j],right[i][j]/2)-1;
				if(left[i][j] > 2)
				ans += min(up[i][j],left[i][j]/2)-1;
			}
			if(down[i][j] > 1){
				if(right[i][j] > 2)
				ans += min(down[i][j],right[i][j]/2)-1;
				if(left[i][j] > 2)
				ans += min(down[i][j],left[i][j]/2)-1;
			}
			if(left[i][j] > 1){
				if(up[i][j] > 2)
				ans += min(left[i][j],up[i][j]/2)-1;
				if(down[i][j] > 2)
				ans += min(left[i][j],down[i][j]/2)-1;
			}
			if(right[i][j] > 1){
				if(up[i][j] > 2)
				ans += min(right[i][j],up[i][j]/2)-1;
				if(down[i][j] > 2)
				ans += min(right[i][j],down[i][j]/2)-1;
			}
		}
	}
	cout << ans;
	cout << "\n";
}
signed main(){
	ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
	int t;
	cin>>t;
	int m=t;
	while(m--){
		cout<<"Case #"<<t-m<<": ";
		solve();
	}
	return 0;
}
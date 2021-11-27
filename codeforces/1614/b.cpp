#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;

int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t;
	cin>>t;
	
	while(t--)
	{
	   int n;
	   cin>>n;
	   
	   vector<pair<ll,ll>> v;
	   vector<ll> loc(n+1);
	   
	   for(int i = 1 ;i<=n ; i++){
	       ll a;
	       cin>>a;
	       v.push_back({a,i});
	   }
	   sort(v.rbegin(),v.rend());
	   
	   ll lc = 1;
	   
	   ll ans = 0;
	   
	   for(ll i = 0 ;i<n ; i++){
	       loc[v[i].second] = lc;
	       ans += 2*lc*v[i].first;
	       if(i+1 < n){
	           loc[v[i+1].second] = -1*lc; 
	           ans += 2*lc*v[i+1].first;
	           i++;
	       }
	       lc++;
	   }
	   
	   cout<<ans<<endl;
	   
	   cout<<0<<" ";
	   for(ll i =1;i<=n ; i++){
	       cout<<loc[i]<<" ";
	   }
	  cout<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;

int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t;
// 	t = 1;
	cin>>t;
	
	while(t--)
	{
	  
	  ll n;
	 
	  cin>>n;
	  
	   vector<ll> v(n);
	   
	  for(int i = 0 ;i<n ; i++)cin>>v[i];
	  
	  sort(v.begin(),v.end());
	  
	  ll nn = n/2;
	  
	  
	  vector<pair<ll,ll>> ans;
	  
	  ll di = v[0];
	  
	  for(int i = n-1 ; i>=0 ; i--){
	      
	    ans.push_back({v[i],di});  
	      
	  }
	  
	  for(auto it:ans){
	      if(nn>0){
	      cout<<it.first<<" "<<it.second<<endl;
	      nn--;
	      }
	  }
	   
	}
	return 0;
}

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
	    ll n,l,r,k;
	    cin>>n>>l>>r>>k;
	  
	    int ans = 0;
	    
	    vector<ll> v(n);
	    
	    for(int i = 0 ; i<n ; i++){
	        cin>>v[i];
	    }
	    
	    sort(v.begin(),v.end());
	    
	    for(int i = 0 ;i<n ; i++){
	        
	        if(v[i]>=l && v[i] <= r){
	            ans++;
	             k -= v[i];
	        }
	       
	        if(k==0){
	            break;
	        }else if(k<0){
	            ans--;
	            break;
	        }
	    }
	    if(ans == -1)ans=0;
	    cout<<ans<<endl;
	  
	}
	return 0;
}
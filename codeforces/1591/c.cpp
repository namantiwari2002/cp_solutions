#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;


	 
int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    // t = 1;
	cin >> t;
// 	 SieveOfEratosthenes(1e6+1);
	while(t--)
	{
	 
	 
	    int n,k;
	    cin>>n>>k;
	    
	    vector<ll> vp,vn;
	    
	   
	        for(int i = 0 ; i<n ; i++){
	            
	            ll a;
	            cin>>a;
	            
	            if(a<0){
	                vn.push_back(abs(a));
	            }else{
	                vp.push_back(a);
	            }
	            
	        }
	        
	         sort(vp.begin(),vp.end(),greater<ll>());
	         sort(vn.begin(),vn.end(),greater<ll>());
	 

	            ll ans = 0;
	           
	           for(int i = 0 ; i<vp.size() ;  i++){
	               
	               if(i+k-1<vp.size()){
	                   ans += vp[i]*2;
	                   i = i+k-1;
	               }else{
	                   ans += vp[i]*2;
	                   break;
	               }
	               
	           }
	           
	           
	           for(int i = 0 ; i<vn.size() ;  i++){
	               
	               if(i+k-1<vn.size()){
	                   ans += vn[i]*2;
	                   i = i+k-1;
	               }else{
	                   ans += vn[i]*2;
	                   break;
	               }
	               
	           }
	           
	        ll ma;
	        
	        if(vp.size()==0){
	            ma = vn[0];
	        }else if(vn.size() == 0){
	             ma = vp[0];
	        }else{
	           ma = max(vp[0],vn[0]); 
	        }
	           
	           cout<<ans-ma<<endl;
	 
	 
	 }
	 
	
	return 0;
}

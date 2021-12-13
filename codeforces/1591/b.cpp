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
	 
	 int n;
	 cin>>n;
	 
	 vector<ll> v(n);
	 set<ll> s;
	 
	 ll ma = -1;
	 
	 for(int i = 0 ;i< n ;i++){
	     cin>>v[i];
	     ma = max(ma,v[i]);
	     s.insert(v[i]);
	 }
	 
	 
	 if(v[n-1] == ma){
	     cout<<0<<endl;
	 }else{
	
	       ll ans = 0;
	       ll a = v[n-1];
	       
	       for(int i = n-1 ; i>=0 ; i--){
	           if(v[i] > a){
	               ans++;
	               a = v[i];
	           }
	           if(a == ma)break;
	       }
	       
	       cout<<ans<<endl;
	     
	  
	   }
	     
	 }
	 
	 
	 
	 
	
	return 0;
}

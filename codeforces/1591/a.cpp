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
	 
	 vector<int> v(n);
	 
	 for(int i = 0 ; i<n ; i++)cin>>v[i];
	 
	 ll ans  = 1;
	 
	 for(int i = 0 ; i<n ; i++){
	     if(v[i] == 1){
	         if(v[i-1] == 1){
	             ans+=5;
	         }else{
	         ans++;
	         }
	     }else{
	         if(i!=n-1){
	             if(v[i+1] == 0){ans = -1;
	             break;
	             }
	         }
	     }
	 }
	 
	 cout<<ans<<endl;
	 
	}
	return 0;
}

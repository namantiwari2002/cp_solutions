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
	 
	  ll s = 0;
	  
	  vector<int> v(n);
	  for(int i = 0;i<n ; i++){
	      cin>>v[i];
	  }
	  
	  for(int i = 0 ;i<n ; i++){
	      ll ts = 0;
	      ll ma = v[i];
	      for(int j = 0 ;j<n ; j++){
	          
	          if(j!=i){
	              
	              int k = v[j];
	              while(k%2 == 0){
	                  ma *= 2;
	                  k /= 2;
	              }
	              ts += k;
	          }
	          
	      }
	      
	      ts += ma;
	      s = max(s,ts);
	  }
	  
	  cout<<s<<endl;
	  
	}
	return 0;
}
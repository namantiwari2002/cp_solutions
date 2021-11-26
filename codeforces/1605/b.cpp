#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;

int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int t;
	cin>>t;
	
	while(t--){
	    
	    int n;
	    cin>>n;
	    
	    string s;
	    cin>>s;
	    
	    if(is_sorted(s.begin(),s.end())){
	        cout<<0<<endl;
	        continue;
	    }
	    
	    string ts = s;
	    sort(ts.begin(),ts.end());
	    
	    cout<<1<<endl;
	    vector<int> ans;
	    
	    for(int i = 0 ;i<n ; i++){
	        if(ts[i] != s[i])ans.push_back(i+1);
	    }
        cout<<ans.size()<<" ";
        for(auto it : ans){
            cout<<it<<" ";
        }
        cout<<endl;

    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


// Function to print all binary numbers upto n

vector<string> generate(int N)
{
	
	vector<string> v;
	
	while(N>0){
	    
	    string s = bitset<64> (N).to_string();
	    const auto loc1 = s.find('1');
	    
	    if(loc1 != string::npos){
	        v.push_back(s.substr(loc1));
	    }else{
	        v.push_back("0");
	    }
	    
	    N--;
	    
	}
	
	reverse(v.begin(),v.end());
	
	return v;
	
}


// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}  // } Driver Code Ends
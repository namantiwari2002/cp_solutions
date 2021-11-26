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
	    string s;
		cin >> n >> s;
		int ans = INT_MAX;
		for(int i = 0; i < n; i++)
		{
			vector<int> f(3, 0);
			
			f[s[i] - 'a']++;
			
			for(int j = i + 1; j < min(n, i + 7); j++)
			{
				f[s[j] - 'a']++;
				
				if(f[0] > f[1] && f[0] > f[2]){
				    	ans = min(ans, j - i + 1);
				}
				
			}
		}
		if(ans == INT_MAX)
			ans = -1;
		cout << ans << endl;
	}
	return 0;
}

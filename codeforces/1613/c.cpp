#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;



int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 ll t, n, i, j, ans, temp, sum, h;
	string sans;
	t = 1;
	cin >> t;
	
	while(t--)
	{
	  
        sans = "NO";
		ans = temp = sum = 0;
		cin >> n >> h;
		vector<ll> a(n + 1, 0);
		for( int i = 1; i<=n ; i++)
		{
			cin >> a[i];
		}
	if(n==1)
		{
			cout << h << "\n";
			continue;
		}
		ll l, r, mid;
		l = 0;
		r = 1e18 + 10;
		while (r > l + 1)
		{
			mid = (l + r) / 2;
			bool ok = false;
			ll hit = 0;
			for( int i = 2; i<=n ; i++)
			{
				hit += min(a[i] - a[i - 1], mid);
			}
			hit += mid;
			if (hit >= h)ok = true;
			if (ok)
			{
				r = mid;
			}
			else
			{
				l = mid;
			}
		}
		cout << r << "\n";
	}
	return 0;
}

#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;

ll mm = 1e6;
ll mod = 1e9+6; 

bool ok = true;
vector<vector<ll>>adj;
vector<ll> pos;
vector<ll> ansvec;

void dfs(ll curr_node)
{
	ll mn = INT_MAX;
	for (auto x : adj[curr_node])
	{
		dfs(x);
		mn = min(mn, pos[x]);
	}
	if (mn < pos[curr_node])
	{
		ok = false;
		return;
	}
}


int main()
{
  
    ll t, n, i, j, ans, temp, sum, x;
    cin>>t;
    // t =1;
    while (t--)
	{
	
		ans = temp = sum = 0;
		cin >> n;
		ok = true;
		adj.assign(n + 1, {});
		pos.assign(n + 1, 0);
		ansvec.assign(n + 1, 0);
		ll root;
		vector<ll> parent(n + 1, 0);
		for(int i = 1 ; i<=n ; i++)
		{
			cin >> x;
			if (x == i)root = i;
			else adj[x].push_back(i), parent[i] = x;
		}
		vector<ll> p(n + 1, 0);
		for(int i = 1 ; i<=n ; i++)
		{
			cin >> p[i];
			pos[p[i]] = i;
		}
		dfs(root);
		if (!ok)
		{
			cout << -1;
		}
		else
		{
			vector<ll> dist(n + 1, 0);
		for(int i = 2 ; i<=n ; i++)
			{
				ansvec[p[i]] = dist[p[i - 1]] + 1 - dist[parent[p[i]]];
				dist[p[i]] = dist[parent[p[i]]] + ansvec[p[i]];
			}
				for(int i = 1 ; i<=n ; i++)cout << ansvec[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}

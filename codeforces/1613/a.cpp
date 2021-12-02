#include <bits/stdc++.h>
using ll = long long;
using ld = long double;
using namespace std;

int main()
{
   ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
 ll t, n, i, j, ans, temp, sum;
    string sans;

// 	t = 1;
	cin>>t;
	
	while(t--)
	{
	  
	 sans = "NO";
        ans = temp = sum = 0;
        sans = "=";
        ll len1, len2;
        string x1, x2;
        ll p1, p2;
        cin >> x1;
        cin >> p1;
        cin >> x2;
        cin >> p2;
        len1 = (ll)x1.size();
        len1 += p1;
        len2 = (ll)x2.size();
        len2 += p2;
        if (len1 > len2)
        {
            sans = ">";
        }
        else if (len2 > len1)
        {
            sans = "<";
        }
        else
        {
            ll sz1, sz2;
            sz1 = (ll)x1.size();
            sz2 = (ll)x2.size();
            if (sz1 > sz2)
            {
                for(int i = 1 ; i<= sz1 - sz2 ; i++)
                {
                    x2 += '0';
                }
            }
            else
            {
                 for(int i = 1 ; i<= sz2 - sz1 ; i++)
                {
                    x1 += '0';
                }
            }
            sz1 = sz2 = (ll)x1.size();
            bool found = false;
            for(int i = 0 ; i<= sz1 - 1 ; i++)
            {
                if (x1[i] > x2[i])
                {
                    found = true;
                    sans = ">";
                    break;
                }
                else if (x2[i] > x1[i])
                {
                    found = true;
                    sans = "<";
                    break;
                }
            }
            if (!found)sans = "=";
        }
        cout << sans << "\n";
    }
    return 0;
}

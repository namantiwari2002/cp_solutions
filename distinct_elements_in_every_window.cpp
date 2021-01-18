#include <bits/stdc++.h>
using namespace std;

vector <int> countDistinct(int[], int, int);

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) 
        	cin >> a[i];
        vector <int> result = countDistinct(a, n, k);
        for (int i : result) 
        	cout << i << " ";
        cout << endl;
    }
    return 0;
}// } Driver Code Ends



vector <int> countDistinct (int A[], int n, int k)
{

     map<int , int> unm;
     vector<int> d;
   
   int dc = 0;
   for(int i =0 ; i<k ; i++){
       
       if(unm[A[i]] == 0){
           dc++;
       }
       
       unm[A[i]] += 1;
       
   }
   d.push_back(dc);
   
   for( int i =k ; i<n ; i++){
       
       if(unm[A[i-k]] == 1){
           dc--;
       }
       unm[A[i-k]] -= 1;
       
       if(unm[A[i]] == 0){
           dc++;
       }
       
       unm[A[i]] += 1;
       
       d.push_back(dc);
       
   }

return d;
}
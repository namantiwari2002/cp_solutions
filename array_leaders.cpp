
#include <bits/stdc++.h>
using namespace std;



vector<int> leaders(int a[], int n){
   
   vector<int> l;
   int max= a[n-1];
   l.push_back(a[n-1]);
   for(int i = n-2 ; i >= 0 ; i--){
       
       if(a[i] >= max){
           max = a[i];
           l.push_back(max);
       }
     
   }
   
   reverse(l.begin() , l.end());
   
   return l;
   
}

// { Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        
        //calling leaders() function
        vector<int> v = leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}

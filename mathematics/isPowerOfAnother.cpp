// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    int isPowerOfAnother(long long X, long long Y){
        
        long long a = log(Y)/log(X);
        
        if(Y== pow(X, a)){
            return 1;
        }
            
        return 0;   
        
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        long int X, Y;
        cin >> X >> Y;
        Solution ob;
        cout << ob.isPowerOfAnother(X,Y) << endl;
    }
    return 0; 
}   // } Driver Code Ends
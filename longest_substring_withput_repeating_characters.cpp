#include <bits/stdc++.h>
using namespace std;

int SubsequenceLength(string s);


 // } Driver Code Ends


//User function Template for C++

// s is the given string
int SubsequenceLength (string s) 
{
    
    int count = 0 ; 
    int arr[26] = {0};
    int m = 0;
    int point = 0;
    
    for(int i = 0 ; i < s.length() ; i++ , m = max(m , count)){
        
        if(arr[s[i] - 'a'] == 0){
           
           arr[s[i] - 'a'] = 1;
           count++;
            
        }else{
            
            while( s[point] != s[i] ){
                arr[s[point]-'a'] = 0;
                point++;
                count--;
            }
            point++;
            
        }
        
    }
  
  return m;
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
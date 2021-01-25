#include <bits/stdc++.h>
using namespace std;
string reverseWords(string s);
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        cout<<reverseWords(s)<<endl;
    }
}// } Driver Code Ends


string reverseWords(string S) 
{ 
    string rev;
    int j = 0;
    int dots = 0;
    
    for(int i = S.length() ; i >= 0 ; i--){
        j++;
        if(S[i] == '.'){
            dots++;
            rev.append(S.substr(i , j));
            j = 0;
            
        }
        
    }
    
    if(dots == 0){
        
        return S;
    }
    
    rev.append(".");
    
   for(int k = 0 ; k < S.length() ; k++){
        
        
        if(S[k] == '.'){
            
            rev.append(S.substr(0 , k));
            break;
            
        }
        
    }
    
    rev.erase(rev.begin() , rev.begin() +1);
    
    return rev;
    
} 
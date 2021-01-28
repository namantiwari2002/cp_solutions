#include<bits/stdc++.h>
using namespace std;
char* reverse(char *str, int len);
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        char str[10000];
        cin>>str;
        long long int len=strlen(str);
        char *ch=reverse(str,len);
        cout<<ch;
        cout<<endl;
    }
        return 0;
}

// } Driver Code Ends



//return the address of the string
char* reverse(char *S, int len)
{
    stack<char> s;
    string rev;
    char *i;
    
    for(i = S ; *i != '\0' ; i++){
        
        
        s.push(*i);
        
        
    }
  
    while(!s.empty()){
        
       rev.push_back(s.top());
       s.pop();
    
        
    }
    
    char *l = strdup(rev.c_str());
    return l;
    
    
    
}
#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
    ll t;
    string ss;
    cin>>t;
   
    while(t--){
       
        
       
        cin >> ss;
            cout << ss;
        ll c =0;
        ll m = 0;
        
        stack<char> st;
          
        for(ll i = 0 ; i < ss.size() ; i++){
           
           if(ss[i] == 'G'){
               
              
              if(!st.empty()){ 
               while(st.top() == 'L'){
                   c++;
                   if(!st.empty()){
                   st.pop();}else{break;}
               }
               st.push('G');
               
           }
           }
           
           if(c == 0){ 
            if(ss[i] == 'L'){
                st.push('L');
            }
           }else{
               m = max(m , c);
               c = 0 ;
               st.push('L');
           }
           
           m = max(m ,c);
            
        }
        
        cout<<m<<endl;
       
    }
  
    
    return 0;
}

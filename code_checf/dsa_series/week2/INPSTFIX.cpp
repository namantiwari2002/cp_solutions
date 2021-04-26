#include <iostream>
#include <bits/stdc++.h>
using ll = long long;
using namespace std;

int main()
{
   
  ll t;
  cin>>t;
  
  while(t--){
      ll n ;
      cin>>n;
      
      char s;
      
      stack<char> st;
      
      for(ll i =0 ; i<n ; i++){
          cin>>s;
          switch(s){
              
                case '(':
                 st.push('(');
                 break;
            
                case ')':
                 while(st.top() != '('){
                     cout<<st.top();
                     st.pop();
                 }
                 st.pop();
                 break;
                 
                 case '+':
                    while(st.top() != '(' && !st.empty()){
                        cout<<st.top();
                        st.pop();
                    }
                    st.push('+');
                    break;
                
                case '-':
                    while(st.top() != '(' && !st.empty()){
                        cout<<st.top();
                        st.pop();
                    }
                    st.push('-');
                    break;
                    
                case '*':
                    while(st.top() != '(' && !st.empty() && st.top() != '+' && st.top() != '-'){
                        cout<<st.top();
                        st.pop();
                    }
                    st.push('*');
                    break;
                    
                 case '/':
                    while(st.top() != '(' && st.empty() && st.top() != '+' && st.top() != '-'){
                        cout<<st.top();
                        st.pop();
                    }
                    st.push('/');
                    break;
                
                 case '^':
                    
                    st.push('^');
                    break;
                    
                default :
                    cout<<s;
                    break;
              
              
          }
          
          while(!st.empty()){
              cout<<st.top();
              st.pop();
          }
          
      }
      
      cout<<endl;
      
      
  }
  
    
    return 0;
}


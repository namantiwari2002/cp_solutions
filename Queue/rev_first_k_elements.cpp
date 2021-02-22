#include<bits/stdc++.h>
using namespace std;
queue<int> modifyQueue(queue<int> q, int k);
int main(){
    int t;
    cin>>t;
    while(t-->0){
        int n,k;
        cin>>n>>k;
        queue<int> q;
        while(n-->0){
            int a;
            cin>>a;
            q.push(a);
        }
        queue<int> ans=modifyQueue(q,k);
        while(!ans.empty()){
            int a=ans.front();
            ans.pop();
            cout<<a<<" ";
        }
        cout<<endl;
    }
}// } Driver Code Ends


//User function Template for C++

queue<int> modifyQueue(queue<int> q, int k)
{
    
    stack<int> s;
    int n = q.size() - k;
    while(k != 0){
        s.push(q.front());
        q.pop();
        k--;
    }
    
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
    
    while(n != 0){
        q.push(q.front());
        q.pop();
        n--;
    }
    
    return q;
    
}
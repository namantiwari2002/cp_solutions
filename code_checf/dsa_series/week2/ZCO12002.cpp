#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int n,x,y;
    cin>>n>>x>>y;
    
    int v[x] , w[y];
    int f,s;
    vector<pair<int , int>> c;
    
    for(int i = 0 ; i<n ;i++){
        cin>>f>>s;
        c.push_back(make_pair(f,s));
    }
    
    for(int i = 0 ; i<x; i++){
        cin>>v[i];
    }
    
    for(int j = 0 ; j < y ;j++){
        cin>>w[j];
    }
    
    sort(v , v+x);
    sort(w , w+y);
    
    int ti = -1;
      int s1 = -1;
        int s2 = -1;
    for(int i = 0 ; i<n; i++){
       
        for(int k = 1 ; k<x ; k++){
            if(v[k] > c[i].first){
                 s1 = v[k-1];
                
                break;
            }
        }
        
        for(int k = 0 ; k<y ;k++){
            if(w[k] >= c[i].second){
                s2 = w[k];
               
                break;
            }
        }
        
        if(s1 != -1 && s2 != -1){
        if(ti == -1){
            ti = s2 - s1 +1;
        }else{
            ti = min(ti , s2-s1+1);
        }
    }
        
        
        
    }
    
    cout<<ti;
    

    return 0;
}


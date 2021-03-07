#include <bits/stdc++.h> 
using namespace std; 
  
int main(){

    int t;
    cin>>t;
    int f = 0;

    while(f < t){

        
        int j;
        int n , b;

        cin>>n>>b;
        vector<int> v(n);
        for(int i = 0 ; i < n ; i++){

            cin>>v[i];
        }

        sort(v.begin() , v.end());

        int count = 0 ;
        for(j = 0 ; j < n ; j++){

            count += v[j];
            if(count>b){
                count = count - v[j];
                break;
            }

        }

        cout<<"Case #"<<f+1<<": "<<j<<endl;

        f++;
        
    }

    return 0;

}
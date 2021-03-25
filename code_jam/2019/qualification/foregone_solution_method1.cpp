#include <bits/stdc++.h>

using namespace std;

bool check_four(int n1 , int n2){
    
    string str1 = to_string(n1);
    
    string str2 = to_string(n2);
    
    if(str1.find('4') == string::npos && str2.find('4') == string::npos){
        return false;
    }else{
        return true;
    }
    
}

int main()
{
    int t;
    cin>>t;
    int copy;
    copy = t;

    while(t--){
    
    int n;
    cin>>n;
    
    int n1 = 0 ;
    int n2 = n;
    
        while(check_four(n2,n1)){
            n1++;
            n2--;
        }
    
    
    cout<<"Case #"<<copy-t<<": "<<n1 <<" "<<n2<<"\n";
    
    
    }
    return 0;
}

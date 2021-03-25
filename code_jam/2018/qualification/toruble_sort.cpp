#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void trouble_sort(int arr[] ,int n){
    
    
    while(true){
    int count = 0;
    
    for(int i = 0 ; i<n -2 ; i++){
        if(arr[i] > arr[i+2]){
            count++;
            int temp = arr[i];
            arr[i] = arr[i+2];
            arr[i+2] = temp;
        }
    }
    
    if(count == 0){
        break;
    }
    
    }
    
    
}

int main()
{
    
    int t;
    cin>>t;
    int copy = t;
    
    
    while(t--){
       int index = -1;
       int n;
       cin>>n;
       int arr[n];
       
       for(int i =0 ; i< n ; i++){
           cin>>arr[i];
       }
       
       trouble_sort(arr,n);
       
       for(int k = 0 ; k< n-1 ; k++){
           if(arr[k]>arr[k+1]){
           index = k;
           break;
           }
        }
       
       if(index != -1){
           cout<<index<<"\n";
       }else{
           cout<<"OK\n";
       }
       
        
    }
    
    return 0;
    
}

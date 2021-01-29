#include<iostream>
#include<stdio.h>

using namespace std;

int bsearch(int arr[] , int n , int key){


int s = 0 ; int e = n-1 ; int m;

while(true){

   m = (s+e)/2;
   if(arr[m] == key){
       return m;
   }else if(s >= e){
       return -1;
   }else if(arr[m] > key){
       e = m -1;
   }else{
       s = m+1;
   }

}

}

int main(){

  int n ; 
  cin>>n;
  int a[n];
  int k;
  

  for(int i = 0 ; i < n ; i++){
      cin>>a[i];
  }

cout<<"-------"<<endl;
cin>>k;

  int l = bsearch(a , n , k);
  cout<<"------------ "<<l;

  return 0;

}
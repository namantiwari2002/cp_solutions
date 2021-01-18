#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to find the subarray with given sum k
// arr: input array
// n: size of array
vector<int> subarraySum(int arr[], int n, int s){
    
  int sum = 0;   
  vector<int> val;
  int i = 0 , j =1;
  int k =0;
  
  
  
  while(j>=i && j <=n){
      
      if(arr[i] == s){
          
          val.push_back(i+1);
          val.push_back(i+1);
          return val; 
          
      }
      
      if(sum < s){
          if(sum == 0){
              sum = arr[i] + arr[j];
              j++;
              
          }else{
              sum += arr[j];
              j++;
          }
      }
      
      if(sum > s){
          sum = 0;
          i++;
          j = i+1;
         
      }
      
      
      if(sum == s){
          
          val.push_back(i+1);
          val.push_back(j);
          return val; 
          
      }
      
  }
  val.push_back(-1);
  return val;
}

// { Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        int arr[n];
        
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        vector<int>res;
        res = subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}  // } Driver Code Ends
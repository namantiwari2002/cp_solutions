#include<iostream> 
using namespace std; 


 
int maxEvenOdd(int arr[], int n) 
{ 
  
  int i = 0;
  int j = 1;
  int count = 0;
  
  if(n == 1){
      return 1;
  }
  
  while(i<n && j>=i && j <n){
      
      if((arr[j] - arr[j-1])%2 != 0){
          
         
          
      }else{
          
          
          i = j;
          
          
      }
      
      if(count <= j - i + 1){
              count = j - i +1;
          }
          
         j++; 
          
      }
      
    return count ;
      
      
      
  }

// { Driver Code Starts.



/* Driver program to test maxSubArraySum */
int main() 
{ 
    int testcases;
    //testcases
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        //size of array
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        
        //inserting elements in the array
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        
        //calling function
        cout  << maxEvenOdd(arr, sizeOfArray)<<endl; 
    }
   return 0; 
} 
  // } Driver Code Ends

#include <iostream>
using namespace std;

int reverseArray(int arr[],int n)
{
    
    int dump = 0; int mid;
   
   if(n%2 != 0){
       mid = n/2; }
       else{
           mid = (n/2) - 1;
       }
       
  for(int i = 0 ; i <= mid ; i++){
      
      dump = arr[i];
      arr[i] = arr[n-i-1];
      arr[n-1-i] = dump; 
      
  }
   }
   

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    reverseArray(arr,n);
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    
	    cout<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends
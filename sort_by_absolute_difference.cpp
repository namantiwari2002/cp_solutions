#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


// Function to sort the given array according to
// the difference with K
// A[]: input array
// N: size of array


//Need to Debug this method
/*bool compare(int i , int j){
    
    return (abs(i) < abs(j));
    
}

int dump;
    
    for(int i = 0 ; i <N ; i++){
        dump = A[i];
        A[i] = (dump - k);
        
    }
    
    sort(A , A+N , compare);
    
    for(int m = 0 ; m <N ; m++){
        
          A[m] = (A[m] + k);
        
    }*/

void sortABS(int A[],int N, int k)
{
    
    
    multimap<int , int> mp;
    
    for(int i = 0 ; i<N ; i++){
        
        mp.insert(make_pair(abs(k - A[i]) , A[i]));
        
    }
    
    int j =0;
    for(auto itr = mp.begin(); itr != mp.end() ; ++itr){
        
        A[j++] = (*itr).second;
        
    }
    
   
    
    
}


// { Driver Code Starts.

int main()
 {
	int T;
	cin>> T;
	
	while (T--)
	{
	    
	    int N, diff;
	    cin>>N>>diff;
	    int A[N];
	    
	    for(int i = 0; i<N; i++)
	        cin>>A[i];
	   
	    sortABS(A, N, diff);
	    
	    for(int & val : A)
	        cout<<val<<" ";
	    cout<<endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends
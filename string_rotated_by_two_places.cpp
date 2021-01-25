#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


/*  Function to check if str1 can be formed from
*   str2 after rotation by 2 places
*/
bool isRotated(string str1, string str2)
{
  
  string cl = "" ;
  string ant = "";
  
  if (str1.length() != str2.length()){ 
        return false; 
  }
  
  int l = str1.length();
  
  
  /// for all the single char strings , ant and cl can't be generated using it 
  if(l < 2){
      
      if(str2.compare(str1) == 0){
      
      return true ;
      
      }else{
          return false ;
      }
  }
  
  ant = ant + str1.substr(l-2 , 2) + str1.substr(0 , l-2);
  
  cl = cl + str1.substr(2) + str1.substr(0 , 2);
  
 return (str2.compare(cl) == 0 || 
            str2.compare(ant) == 0); 
  
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		string b;
		cin>>s>>b;
		cout<<isRotated(s,b)<<endl;
	}
	return 0;
}
  // } Driver Code Ends
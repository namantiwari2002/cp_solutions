#include <iostream>
using namespace std;
int remainderWith7(string );

int main() {
	// your code goes here
int t;
cin>>t;
while(t--)
{
string n;
cin>>n;

cout<<remainderWith7(n)<<endl;

}
	return 0;
}// } Driver Code Ends


/*You are required to complete this method */
int remainderWith7(string n)
{
    
   int series[] = {1 , 3 ,2 , -1 , -3  , -2};
   
   int series_index = 0;
   
   int result = 0;
   
   for(int i = n.size() -1 ; i >= 0 ; i--){
       
       int digit = n[i] - '0';
       
       result += digit*series[series_index];
       
       series_index = (series_index + 1)%6;
       
       result %= 7;
       
   }
   
   if (result < 0) 
      result = (result + 7) % 7; 
      
      
    return result ;
}
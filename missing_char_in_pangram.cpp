#include<bits/stdc++.h>
using namespace std;

// A panagram is a string with every letter in the english alphabet present in the string

string missingPanagram(string str);
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << missingPanagram(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++


string missingPanagram(string str){
    
    string s;
    int arr[256] = {0};

 for(int i = 0 ; i < str.length() ; i++){
  
  char ch = tolower(str[i]);
  
  arr[ch]++;
     
 }
 
 for(int j = 'a' ; j<= 'z' ; j++){
     char in = j;
     if(arr[j] == 0){
         
         s.push_back(in);
     }
     
 }
 
 return s;
    
}

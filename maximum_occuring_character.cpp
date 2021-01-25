#include<bits/stdc++.h>
using namespace std;

char getMaxOccuringChar(char*);

int main()
{
   
    char str[100];
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	scanf("%s",str);
    cout<< getMaxOccuringChar(str)<<endl;
    }
}// } Driver Code Ends


// Function to get maximum occuring 
// character in given string str
char getMaxOccuringChar(char* str)
{
    

    //error for the case 'abcdabcd' in this commented method
   /* int all[256] = {0};
    int max = 0;
    int j;
    
    while(*str != '\0'){
        
        all[*str] += 1;
        
        ++str;
        
    }
    
    for(j = 0 ; j <= 256 ; j++){
        
       if(all[j] > all[max]){
           
           max = j;
       }
        
    }
    
    return max; */
    
    map<char , int> m;
    int max = 0;
    char ch;
    while(*str != '\0'){
        
        m[*str]++;
        
        ++str;
        
    }
    
    for(auto itr = m.begin() ; itr != m.end() ; ++itr){
        
        if(itr->second > max){
            
            ch = itr->first;
            max = itr->second;
            
        }
        
    }
    
    return ch;
    
}

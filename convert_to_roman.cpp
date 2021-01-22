#include <bits/stdc++.h>
using namespace std;


string convertToRoman(int ) ;


int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int N;
		cin>>N;
		
	cout << convertToRoman(N);
	cout<<endl;
		
	}
	return 0;
}// } Driver Code Ends


/*you are required to complete 
this function*/

// n :given number that you are require to convert
string convertToRoman(int n) 
{
   
       string ans;
    while(n>0){
        if(n>=1000){
            ans.append("M");
            n -= 1000;
        }
        else if(n>=900){
            ans.append("CM");
            n -= 900;
        }
        else if(n>=500){
            ans.append("D");
            n -= 500;
        }
        else if(n>=400){
            ans.append("CD");
            n -= 400;
        }
        else if(n>=100){
            ans.append("C");
            n -= 100;
        }
        else if(n>=90){
            ans.append("XC");
            n -= 90;
        }
        else if(n>=50){
            ans.append("L");
            n -= 50;
        }
        else if(n>=40){
            ans.append("XL");
            n -= 40;
        }
        else if(n>=10){
            ans.append("X");
            n -= 10;
        }
        else if(n>=9){
            ans.append("IX");
            n -= 9;
        }
        else if(n>=5){
            ans.append("V");
            n -= 5;
        }
        else if(n>=4){
            ans.append("IV");
            n -= 4;
        }
        else if(n>=1){
            ans.append("I");
            n -= 1;
        }
    }
       
       return ans;
       
}

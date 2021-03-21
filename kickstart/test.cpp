/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){

  int n;
  cin >> n;
  int col = (4 * n - 3);
  int row = (2 * n - 1);
  int a[col] = { 0 };
  
  for(int i = 0; i < row; i++)
    {
        int k = 0;
      if (i > row / 2 + 1)
	{
	  k = 2*(2*(row - i) - 1);
	}else{
	  k = 2*i;
	}

      for(int l = 0; l < col; l++)
	{

	  if(k>= 0){
	      
	      if (l == (col / 2 - k))
		{
		  a[l] = 1;
		  k--;
		  
		}
		
	  }
	    

	}



      for (int f = 0; f < col; f++)
	{
	  cout << a[f];
	}

      cout << endl;

      for (int q = 0; q < col; q++)
	{
	  a[q] = 0;
	}


    }

  return 0;

}


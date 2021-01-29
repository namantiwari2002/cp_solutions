#include <iostream>
#include<math.h>
#include<stdio.h>
using namespace std;

int getSize(long a){
    
   int count = 0;
    while(a>0){
        count++;
        a /= 10;
        
        
    }
    return count;
}

long Karatsuba(long X , long Y){

     if(X<10 && Y<10){
        return X*Y;
      }  
      
      int size = fmax(getSize(X) , getSize(Y));
      
      int n = ceil(size/2);
      
      long p = pow(10 , n);
      
      long a = (long) floor(X/p);
      long b = (long) X%p;
      long c = (long) floor(Y/p);
      long d = (long) Y%p;
      
      long ac = Karatsuba(a , c);
      long bd = Karatsuba(b ,d);
      long e = Karatsuba(a+b , c+d) - ac - bd;
      
      return (long)(pow(10 , 2*n)*ac + pow(10 , n)*e + bd);
    
}

int main(){
    
    long a , b;
    cin>>a>>b;
    long r = Karatsuba(a,b);
    cout<<r;
    
    return 0;
    
}

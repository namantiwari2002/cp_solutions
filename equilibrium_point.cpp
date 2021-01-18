#include <iostream>
using namespace std;

int equilibriumPoint(long long a[], int n);

int main() {

    long long t;
  
    cin >> t;

    while (t--) {
        long long n;

        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        //calling equilibriumPoint() function
        cout << equilibriumPoint(a, n) << endl;
    }
    return 0;
}

int equilibriumPoint(long long a[], int n) {

int sum1 = 0 , sum2 =0;
int i = 0 , j = n-1;

  while(j-i>=1){
      
      
      
      
      if(sum1>sum2){
          sum2 += a[j];
          j--;
      }else{
          sum1 += a[i];
          i++;
      }
      
  }
  
  if(sum1 == sum2){
      return i+1;
  }
  
  return -1;
  
}
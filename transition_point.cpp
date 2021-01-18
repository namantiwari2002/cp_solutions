#include <bits/stdc++.h>
using namespace std;

int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends



int transitionPoint(int arr[], int n) {
       
     int i = 0 , k =n-1 , mid;
     
     while(i<=k){
         
         mid = (i+k)/2;
         
         if(arr[mid] == 0){
             
             if(arr[mid + 1] == 1){
                 return mid+1;
             }else{
                 i = mid+1;
             }
             
         }
         
         if(arr[mid] == 1){
             if(arr[mid - 1] == 0 || mid == k || mid == 0 || mid == n-1){
                 return mid;
             }else{
                 k = mid-1;
             }
             
             
             
         }
         
     }
     
     return -1;
     
}
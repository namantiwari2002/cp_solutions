#include <iostream>
using namespace std;


void isort(int arr[] , int n){

int i ,j , key;

for(i = 1 ; i < n ; i++){

   j = i-1;
   key = arr[i];
   while(j >= 0 && arr[j] > key ){
        arr[j+1] = arr[j];
        j--;
    }

    arr[j+1] = key;
}

for(int k = 0 ; k<n ; k++){
    cout<<arr[k]<<" ";
}

}

int main(){

 int a[] = {4 ,11 , 56 , 22 , 9 , 11 , 89 , 2 , 1 , 999};

 isort(a , 10);

 return 0;

}
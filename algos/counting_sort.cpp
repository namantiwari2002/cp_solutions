#include<iostream>
using namespace std;

//segementation in commented code
/*void countSort(int arr[] , int n){

    int out[n+1];
    int count[21] = {0};

    for(int i = 0 ; arr[i] ; ++i){

        ++count[arr[i]];

    }

    for(int i = 1 ; i <= 20 ; ++i ){
        count[i] += count[i-1]; 
    }

    for(int i = 0 ; arr[i] ; ++i){
        out[count[arr[i]]  -1] = arr[i];
        --count[arr[i]];

    }

    for(int i = 0 ; arr[i] ; ++i){
        arr[i] = out[i];
    }

}

int main(){

    int arr[] = {1 , 3 ,2 ,7 ,1 ,11 ,4 ,12 ,4};

    countSort(arr , 9);

    for(int i = 0 ; i <9 ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;

} */


void countSort(int arr[] , int size){

    int output[10];
    int count[10];
    int max = arr[0];

    for(int i = 0 ; i < size ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    for(int i = 0 ; i <= max ; ++i){

        count[i] = 0;

    }

    for(int i = 0 ; i < size ; i++){
        count[arr[i]]++;
    }

    for(int i = 1 ; i <= max ; i++){
        count[i] += count[i-1];
    }

    for(int i = size-1 ; i >=0 ; i--){
        output[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 0 ; i < size ; i++){
        cout<<output[i]<<" ";
    }


}

int main(){

    int arr[] = {1 ,4 ,2 ,6 ,4 ,8 ,4};
    countSort(arr , 7);

    return 0;

}
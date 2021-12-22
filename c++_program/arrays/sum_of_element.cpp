#include<iostream>
using namespace std;

int sumOfArray(int arr[], int n){
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<sumOfArray(arr, n);

    return 0;
}
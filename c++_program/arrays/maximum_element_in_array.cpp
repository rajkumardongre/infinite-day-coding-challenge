#include<iostream>
using namespace std;

int maxOfArray(int arr[], int n){
    int max = arr[0];
    for(int i=1; i<n; i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    return max;
}

int main(){
    int arr[] ={1,2,3,4,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<maxOfArray(arr, n)<<endl;

    return 0;
}
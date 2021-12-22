#include<iostream>
using namespace std;

double averageOfArray(int arr[], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }
    double avg = double(sum)/n;
    return avg;
}

int main(){
    // int arr[] = {10, 20, 30, 40};
    int arr[] = {4, 7, 8, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<averageOfArray(arr, n);

    return 0;
}
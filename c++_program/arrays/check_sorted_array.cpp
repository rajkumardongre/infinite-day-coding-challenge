#include<iostream>
// #include<bits/stdc++.h>
using namespace std;


// int main(){
//     int arr[] = {1};
//     bool isSorted=true;
//     int len = sizeof(arr)/sizeof(arr[0]);
//     for(int x=0; x<len; x++ ){
//         if(arr[x+1]){
//             if(arr[x]>arr[x+1]){
//                 isSorted = false;
//                 break;
//             }
//             isSorted=true;
//         }
//     }

//     string res = isSorted ? "Yes Sorted" : "No Sorted";
//     cout<<res;
//     return 0;
// }

bool isSorted(int arr[], int n){
    for(int i=1; i<n; i++){
        if(arr[i-1]>arr[i]){
            return false;
        }
    }
    return true;
}


int main(){
    int arr[] = {};
    int n = sizeof(arr)/sizeof(arr[0]);

    if(isSorted(arr, n)){
        cout<<"Yes Sorted";
    }else{
        cout<<"Not Sorted";
    }
    return 0;
}

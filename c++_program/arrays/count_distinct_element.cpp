#include<iostream>
using namespace std;

int checkDistinctElement(int arr[], int n){
    int distinct=1;
    bool match;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                match = true;
                break;
            }else{
                match = false;
            }
        }
        distinct = match ? distinct : distinct+1;
    }
    return  distinct;

}

int main(){
    // int arr[] = {1,1,1,1,1};
    int arr[] = {1,2,1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<checkDistinctElement(arr, n);

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4};
    cout << sizeof(arr)/sizeof(arr[0])<<endl;
    int n = sizeof(arr)/sizeof(arr[0]);

    // TYPE 1 (TRAVERSING ARRAY)
    // for(int i=0; i<n; i++){
    //     cout<<arr[i]<<" ";
    // }

    // TYPE 2 (TRAVERSING ARRAY)
    // for(int i : arr){
    //     cout<<i*2<<" ";
    // }

    // for(int i=0; i<n; i++){
    //     arr[i] *= 2;
    // }

    for(int &i : arr){
        i = i*4;
    }
    // int arr1[] = {} ;
    for(int x : arr){
        cout<<x<<" ";
    }
    return 0;
}
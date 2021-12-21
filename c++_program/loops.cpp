#include<iostream>
using namespace std;
int main(){
    // int n = 4;
    // for(int i=1; i<4+1; i++){
    //     for(int j=1; j<11; j++){
    //         cout<<i*j<<" ";
    //     }
    // cout<<endl;
    // }
    // int n;
    // cin>>n;
    // for(int i=2; i<n; i++){
    //     if(n%i==0){
    //         cout<<i;
    //         break;
    //     }
    // }

    int n, x;
    cout<<"Enter num : ";
    cin>>n>>x;
    for(int i=1; n>=i; i++){
        if(i%x==0)continue;
        cout<<i<<" ";
    }
}
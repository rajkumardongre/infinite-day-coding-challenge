#include<iostream>
using namespace std;

void fibonacci(int n, int n1=0, int n2=1){
    if(n==1){
        // cout<<n1<<" "<<n2<<" ";
    }else{
        int n3 = n1+n2;
        cout<<n3<<" ";
        n1 = n2;
        n2 = n3;
        fibonacci(n-1, n1, n2);
    }
    
}

int main(){
    cout<<0<<" "<<1<<" ";
    fibonacci(5);
    // int n1 = 0, n2 = 1, n3;
    // cout<<n1<<" "<<n2<<" ";
    // for(int i=0; i<5; i++){
    //     n3 = n1+n2;
    //     cout<<n3<<" ";
    //     n1 = n2;
    //     n2 = n3;
    // }

    return 0;
}
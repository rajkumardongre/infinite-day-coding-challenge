#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void primeFactor(int n){
    for(int i=2; i<=n; i++){
        if(n%i==0 && isPrime(i)){
            cout<<i<<" ";
            return primeFactor(n/i);
        }
    }
}

int main(){
    // 50 => 2,5,5 | 20 => 2,2,5 | 13 => 13
    int n;
    // int nm;
    cout<<"Enter Number : ";
    cin>>n;
    primeFactor(n);

    return 0;
}
#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int nextPrimeNo(int n){
    for(int i=n+1; ;i++){
        if(isPrime(i)){
            return i;
        }
    }
}

int main(){
    cout<<nextPrimeNo(7);

    return 0;
}
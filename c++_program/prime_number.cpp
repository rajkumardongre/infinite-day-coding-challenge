#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i<n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    string res = isPrime(n) ? "Prime Number" : "Not a Prime Number";
    cout<<res;
}
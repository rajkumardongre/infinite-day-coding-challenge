#include<iostream>
using namespace std;

void allDivisorOfNumber(int n){
    for(int i = 1; i<=n; i++){
        if(n%i==0){
            cout<<" "<<i;
        }
    }
}

int main(){
    int n;
    cout<<"Enter your number : ";
    cin>>n;
    allDivisorOfNumber(n);

    return 0;
}
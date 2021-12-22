#include<iostream>
using namespace std;

bool isPrime(int n){
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

void factorizationOfNumber(int n){
    // 15 => 3 5 | 50 => 2 5 5 | 20 => 2 2 5
    int counter = 2;
    while(n>1){
        if(isPrime(counter) && n%counter == 0){
            cout<<counter<<" ";
            n = n/counter;
            if(n%counter == 0){
                counter *= counter;
            }else{
                counter++;
            }
        }
    }
}


int mani(){
    cout<<"Before factorisation";
    factorizationOfNumber(50);


    return 0;
}
#include<iostream>
using namespace std;

int greatestCommonDivisor(int n1, int n2){
    int minNumber = n1 > n2 ? n2 : n1;
    int gcd;
    for(int i=1; i<=minNumber; i++){
        if(n1%i==0 && n2%i==0){
            gcd = i;
        }
    }
    return gcd;
}


int main(){

    cout<<greatestCommonDivisor(4, 12);
    return 0;
}
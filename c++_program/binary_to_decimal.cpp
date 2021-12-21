#include<iostream>
using namespace std;


int main(){
    int val = 0;
    int base = 1;
    int n = 1010;         // 5 
    while(n>0){
        int last_digit = n%10;
        val = val + (last_digit*base);     // 1
        n = n/10;
        base = base*2;
    }

    cout<<val;

    return 0;
}
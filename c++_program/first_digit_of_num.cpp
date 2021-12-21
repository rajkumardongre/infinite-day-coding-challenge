#include<iostream>
using namespace std;

int firstDigitOfNumber(int n){
    if(n/10 > 9){
        return firstDigitOfNumber(n/10);
    }
    return n/10;
}

int main(){
    // 932 => 9 | 7342 => 7
    int num;
    cout<<"Enter Your Number : ";
    cin>>num;
    if(num < 10){
        cout<<num;
    }else{
       cout<<firstDigitOfNumber(num);
    }


    return 0;
}
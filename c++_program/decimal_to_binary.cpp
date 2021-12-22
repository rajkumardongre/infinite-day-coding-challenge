#include<iostream>
#include<string>
using namespace std;

string reverseString(string str){
    string revStr = "";
    int len = str.size();
    for(int i=0; i<len; i++){
        revStr += str[len-i-1];
    }
    return revStr;
}

string decimalToBinary(int n){
    string res = "";
    while(n>0){
        int digit = n%2;
        res = res + to_string(digit);
        n = n/2;
    }
    return reverseString(res);
}

int main(){
    cout<<decimalToBinary(28);
    return 0;
}
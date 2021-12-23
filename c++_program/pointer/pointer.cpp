#include<iostream>
using namespace std;

// void fun(int *x){
//     *x = *x+5;
// }

void fun(string *str){
    cout<<*str;
}

int main(){
    // int x = 10;
    // fun(&x);
    // cout<<x;

    string str = "Hello World Is One of the most Prestigious code in whole universe.";
    fun(&str);

    // int x=10;
    // int *p;
    // p = &x;
    // cout<<x<<"\n";   //10
    // cout<<*p<<"\n"; //10
    // cout<<p<<"\n"; //address of x

    return 0;
}
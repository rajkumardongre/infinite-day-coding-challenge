#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}
void greet(string &&s){
    s = "Hi "+s;
    cout<<s<<endl;
}

int main(){
    // int x= 5;
    // int &y = x;
    // cout<<x<<" "<<y<<endl;
    // x=x+5;
    // cout<<x<<" "<<y<<endl;
    // y=y+5;
    // cout<<x<<" "<<y<<endl;

    // int x = 5;
    // int y = 10;
    // cout<<"Before Swaping"<<endl;
    // cout<<x<<" "<<y<<endl;
    // swap(x,y);
    // cout<<"After Swaping"<<endl;
    // cout<<x<<" "<<y<<endl;

    // int arr[] = {10,20,30,40};
    // for(int &x : arr){
    //     x = x*2;
    // }
    // for(int x : arr){
    //     cout<<x<<" ";
    // }

    // R value refrence
    // string s = "users";
    // greet("users");    
    // cout<<s;

    // string s1="Good", s2=" Morning ";
    // string &&s3 = s1+s2;
    // s3 = s3+"Rajkumar";
    // cout<<s3;

    // Address and derefrences operator in c++
    int x = 10;
    cout<<&x<<"\n";
    cout<<*(&x);
    return 0;
}
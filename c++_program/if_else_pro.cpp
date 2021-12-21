#include<iostream>
using namespace std;
int main(){
    // Even Odd number checking
    // int n ;
    // cout<<"Enter your Number : \n";
    // cin>>n;
    // if(n%2==0){
    //     cout<<"Even";
    // }else {
    //     cout<<"Odd";
    // }
    // return 0;

    // Prints Sign and form(even / odd)
    // int n;
    // string sign ;
    // string form;
    // cout<<"Enter your Number : ";
    // cin>>n;
    // if(n==0){
    //     cout<<"Zero";
    // }else{
    //     if(n>0){
    //         sign = "Positive";
    //     }else{
    //         sign = "Negative";
    //     }if(n%2==0){
    //         form = "Even";
    //     }else{
    //         form = "Odd";
    //     }
    // }
    // cout<<sign<<" "<<form;
    
    // Lagest of 3 nos.
    // int a,b,c;
    // int max;
    // cout<<"Enter space Seperated 3 numbers : ";
    // cin>>a>>b>>c;
    // if(a>b && a>c){
    //     max = a;
    // }else{
    //     if(b>c){
    //         max = b;
    //     }else{
    //         max = c;
    //     }
    // }
    // cout<<max;

    // Leap Year
    int year;
    cout<<"Enter Year : ";
    cin>>year;
    if((year%4 == 0) && (year%100 != 0)){
        cout<<"Leap Year";
    }else if(year%400 ==0){
        cout<<"Leap Year";
    }
    else{
        cout<<"Not Leap Year";
    }
    
    return 0;
}
#include<iostream>
using namespace std;

int numberOfDigits(int num){ 
    int digits = 1;
    while(num >= 10){        
        digits = digits +1;  
        num = num/10;
    }
    return digits ;
}

int main(){
    // 323 => 3 | 43 => 2 | 42342 => 5 | 2 => 1
    int num;
    cout<<"Enter Your Number : ";
    cin>>num;
    cout<<numberOfDigits(num);


    return 0;
}
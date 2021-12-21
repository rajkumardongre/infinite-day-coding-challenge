#include<iostream>
using namespace std;

int lcm(int n1, int n2){
    int minNumber = n1 < n2 ? n1 : n2;
    int maxNumber = minNumber==n1 ? n2 : n1;
    int res = n1*n2;
    for(int i=1; i<=minNumber; i++){
        if((minNumber*i)%(maxNumber) == 0 ){
            res = minNumber*i;
            break;
        }
    }
    return res ;
}

int main(){
    // int n;
    // cout<<"Enter Your Number : ";
    // cin>>n;
    cout<<lcm(6,9);

    return 0;
}
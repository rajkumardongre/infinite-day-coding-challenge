#include<iostream>
using namespace std;
int main(){
    // 50 => 2,5,5 | 20 => 2,2,5
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=2; n>i; i++){
        if(n%i == 0){
            for(int j = 1; i>j; j++){
                if(i%j==0 && j!=1){
                    cout<<", "<<j;
                }
            }
        }
    }
}
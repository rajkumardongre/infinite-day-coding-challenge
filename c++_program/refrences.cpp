#include<iostream>
using namespace std;

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    // int x= 5;
    // int &y = x;
    // cout<<x<<" "<<y<<endl;
    // x=x+5;
    // cout<<x<<" "<<y<<endl;
    // y=y+5;
    // cout<<x<<" "<<y<<endl;

    int x = 5;
    int y = 10;
    cout<<"Before Swaping"<<endl;
    cout<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"After Swaping"<<endl;
    cout<<x<<" "<<y<<endl;

    return 0;
}
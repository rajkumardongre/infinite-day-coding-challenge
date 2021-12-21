#include<iostream>
using namespace std;

// PRINTS *****
void horizontal(int n){
    for(int i = 0; i<n; i++){
        cout<<" *";
    }
}

// PRINTS " * " IN VERTICAL
void vertical(int n){
    for(int i=0; i<n; i++){
        cout<<" * \n";
    }
}

// PRINTS RECTANGLE  (OF LENGTH X WIDTH DIMENSIONS)
void  rectangle_fill(int length, int width){
    for(int i=0; i<length; i++){
        for(int j=0; j<width; j++){
            cout<<" *";
        }
    cout<<endl;
    }
}

// PRINTS RECTANGLE  (OF LENGTH X WIDTH DIMENSIONS)
void  rectangle_fill_num(int length, int width){
    for(int i=0; i<length; i++){
        for(int j=0; j<width; j++){
            cout<<" "<<j+1;
        }
    cout<<endl;
    }
}

//  PRINTS INVERTED TRIANGLE
//          *
//        * *
//      * * *
//    * * * *
//  * * * * *    
void inverted_triangle(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(j >= n-i-1){
                cout<<"*";
            }else{
                cout<<" ";
            }
        }
    cout<<endl;
    }
}

int main(){
    // horizontal(5);
    // vertical(5);
    // rectangle_fill(5, 5);
    // rectangle_fill_num(5, 5);
    inverted_triangle(5);

    return 0;
}
# include <iostream>
using namespace std;
// int main(){
//     string name;
//     cout<<"Enter Your Name :";
//     cin>>name;
//     cout<<"Hi "<<name;
//     return 0;
// }

// int main(){
//     int x, y;
//     cout<<"Enter x and y : ";
//     cin>> x >> y;
//     int sum = x+y;
//     cout<<"x + y = "<<sum;
//     return 0;
// }

// to get String whit spaces getline()
int main(){
    string name;
    cout<<"Enter Your full name : ";
    getline(cin, name);
    cout<<"Hi "<<name;
    return 0;
    
}
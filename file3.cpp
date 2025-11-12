#include <iostream>
using namespace std;
int fact(int n){
    int f = 1;
    for(int i=1; i<=n; i++){
        f*=i;
    }
    return f;
}
int main(){
    int n, r;
    cin>>n>>r;
    int factorial = (fact(n))/(fact(r)*fact(n-r));
    cout<<"Factorial of "<<n<<"C"<<r<<" = "<<factorial<<endl;
    //switch statement
    // int amt;
    // cout<<"Enter the amt: ";
    // cin>>amt;
    // cout<<endl;
    // int Rs100, Rs50, Rs20, Rs1;
    // switch(1){
    //     case 1:
    //     Rs100 = amt/100;
    //     amt%=100;
    //     cout<<"Number of Rs100: "<<Rs100<<endl;

    //     case 2:
    //     Rs50 = amt/50;
    //     amt%=50;
    //     cout<<"Number of Rs50: "<<Rs50<<endl;

    //     case 3:
    //     Rs20 = amt/20;
    //     amt%=20;
    //     cout<<"Number of Rs20: "<<Rs20<<endl;

    //     case 4:
    //     Rs1 = amt/1;
    //     amt%=1;
    //     cout<<"Number of Rs1: "<<Rs1<<endl;
    // }


    return 0;
}
#include <iostream>
#include <math.h>
using namespace std;
int main(){
    // int a = 2;
    // int b = 4;
    // cout<<"a&b = "<<(a&b)<<endl;
    // cout<<"a|b = "<<(a|b)<<endl;
    // cout<<"~a = "<<~a<<endl;
    // cout<<"a^b = "<<(a^b)<<endl;
    // cout<<(17>>1)<<endl;
    // cout<<(17>>2)<<endl;
    // cout<<(19<<1)<<endl;
    // cout<<(21<<2)<<endl;
    // int a=1;
    // int b=2;
    // if(a-->0 && ++b>2){
    //     cout<<"Stage 1"<<endl;
    // }
    // else{
    //     cout<<"Stage 2";
    // }
    // cout<<a<<" "<<b;
    // return 0;
    //fibonacci series;

    // int n;
    // cin>>n;
    // int a=0;
    // int b=1;
    // cout<<a<<" "<<b<<" ";
    // for(int i=1; i<=n; i++){
    //     int next = a+b;
    //     a=b;
    //     b=next;
    //     cout<<next<<" ";
    // }

    //prime number
    // int n;
    // cin>>n;
    // bool isprime = true;
    // for(int i=2; i<n; i++){
    //     if(n%i==0){
    //         cout<<"Not a prime number"<<endl;
    //         isprime = false;
    //         break;
    //     }
    // }
    // if(isprime){
    //     cout<<"Prime"<<endl;
    // }
    
    //decimal to binary
    int n;
    cin>>n;
    int i=0;
    int count=0;
    //int ans = 0;
    while(n!=0){
        int bit = n & 1;
        //ans = (bit * pow(10, i)) + ans;
        if(bit==1){
            count++;
        }
        n = n >> 1;
        i++;
    }
    if(count>1){
        cout<<"Not power of 2"<<endl;
    }else{
        cout<<"Power of 2"<<endl;
    }
    // cout<<"Binary number is "<<ans<<endl;
    //binary to decimal

    // int n;
    // cin>>n;
    //  int ans=0;
    //  int i=0;
    //  while(n!=0){
    //     int bit = n & 1;
    //     if(bit==1){
    //     ans = ans + pow(2, i);
    //     }
    //     n = n/10;
    //     i++;
    //  }

    //binary of negative number
    // if(n<0){
    //     n = (~(-n))+1;
    // }
    // while(n!=0){
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;
    //     n = n>>1;
    //     i++;
    // }
    //  cout<<ans;
    
    return 0;
}

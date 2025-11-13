#include <iostream>
using namespace std;
// int main(){
//     char ch;
//     cin>>ch;
//     if(ch>='a'&&ch<='z'){
//         cout<<"lowercase alphabet";
//     }
//     else if(ch>='A' && ch<='Z'){
//         cout<<"Uppercase alphabet";
//     }
//     else if(ch>='0' && ch<='9'){
//         cout<<"numeric value";
//     }
//     else{
//         cout<<"Special character";
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int sum=0;
//     for(int i=1; i<=n; i++){
//         if(i%2==0){
//             sum+=i;
//         }
//     }
//     cout<<"Sum of even numbera between 1 to n = "<<sum;
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<j+1<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n; j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// int main(){
//     int n;
//     cin>>n;
//     int count=1;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<i+1; j++){
//             // cout<<i+1<<" ";//cout<<"* ";
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     for(int i=0; i<n; i++){
//         int count=i+1;
//         for(int j=0; j<i+1; j++){
//             cout<<count<<" ";
//             count--;//count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     // int count=0;
//     for(int i=0; i<n; i++){
//         int count=i;
//         for(int j=0; j<n; j++){
//             //char ch = 'A'+i;
//             char ch = 'A'+count;
//             cout<<ch<<" ";
//             count++;
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// int main(){
//     int n;
//     cin>>n;
//     // int count=0;
//     for(int i=0; i<n; i++){
//         char ch = 'A'+n-i-1;
//         for(int j=0; j<i+1; j++){
//             // char ch = 'A'+i;
//             // char ch='A'+count;
//             cout<<ch<<" ";
//             // count++;
//             ch++;
//         }
//         cout<<endl;
//     }
// }
int main(){
    int n;
    cin>>n;
    // for(int i=0; i<n; i++){
    //     for(int j=n-1; j>i; j--){
    //         cout<<" ";
    //     }
    //     for(int k=0; k<i+1;k++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=n; j>i; j--){
    //         cout<<"*";
    //     }
    //     for(int k=0; k<i; k++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // for(int i=0; i<n; i++){
    //     for(int j=n; j>i+1; j--){
    //         cout<<" ";
    //     }
    //     for(int k=1; k<=i+1; k++){
    //         cout<<k;
    //     }
    //     int c=1;
    //     for(int h = i; h>0; h--){
    //         cout<<h;
    //     }
    //     cout<<endl;
    // }
      cout<<"Learning binary search"<<endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<n-i+2; j++){
            cout<<j<<" ";
        }
        for(int k=0; k<i-1; k++){
            cout<<"* ";
        }
        for(int k=0; k<i-1; k++){
            cout<<"* ";
        }
        for(int j=1; j<n-i+2; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    int a = 2;
    cout<<~a;
    return 0;
}

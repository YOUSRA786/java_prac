#include <iostream>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array's elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array after swapping alternate elements: ";
    for(int i=0; i<n; i+=2){
        if(i+1<n){
            swap(arr[i], arr[i+1]);
        }
    }
    print(arr, n);
    return 0;
}
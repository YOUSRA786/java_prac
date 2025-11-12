#include <iostream>
using namespace std;
// int firstOcc(int arr[], int n, int k){
//     int l = 0;
//     int h = n - 1;
//     int ans = -1;
//     while(l<=h){
//         int mid = l + (h - l)/2;
//         if(arr[mid]==k){
//             ans = mid;
//             h = mid - 1;
//         }
//         else if(k>arr[mid]){
//             l = mid + 1;
//         }
//         else{
//             h = mid - 1;
//         }
//     }
//     return ans;
// }
// int lastOcc(int arr[], int n, int k){
//     int l = 0;
//     int h = n - 1;
//     int ans = -1;
//     while(l<=h){
//         int mid = l + (h - l)/2;
//         if(arr[mid]==k){
//             ans = mid;
//             l = mid + 1;
//         }
//         else if(k>arr[mid]){
//             l = mid + 1;
//         }
//         else{
//             h = mid - 1;
//         }
//     }
//     return ans;
// }
// int main(){
//     cout<<"enter number of elements: ";
//     int n; cin>>n;
//     cout<<"enter array: ";
//     int arr[n];
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
    
//     cout<<"enter element to count: ";
//     int k; cin>>k;
//     int count = lastOcc(arr, n, k) - firstOcc(arr, n, k) + 1;
//     cout<<"Count of "<<k<<" = "<<count<<endl;
//     return 0;
// }
int pivot(int arr[], int n){
    int l = 0;
    int h = n-1;
    if (arr[l] <= arr[h]){
        return arr[0];
    }
    while(l<h){
        int mid = l + (h-l)/2;
        if(arr[mid]>=arr[0]){
            l = mid + 1;
        }else{
            h = mid;
        }
    }
    return arr[l];
}
int main(){
    cout<<"enter number of elements: ";
    int n; cin>>n;
    cout<<"enter array: ";
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"pivot element is "<<pivot(arr, n)<<endl;
    return 0;
}
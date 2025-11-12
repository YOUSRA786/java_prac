#include <iostream>
using namespace std;
//book allocation problem
bool ispossible(int arr[], int n, int m, int mid){
    int count=1;
    int sum=0;
    for(int i=0; i<n; i++){
        if(sum+arr[i] <= mid){
            sum+=arr[i];
        }
        else{
            count++;
            if(count>m || arr[i]>mid){
                return false;
            }
            sum=arr[i];
        }
    }
    return true;
}
int bookAllocation(int arr[], int n, int m){
    int sum=0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    int s=0, e=sum;
    int ans=-1;
    while(s<=e){
        int mid = s+(e-s)/2;
        if(ispossible(arr, n, m, mid)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}
int main(){
    int m, n;
    cout<<"Enter number of students: ";
    cin>>m;
    cout<<"Enter nubmer of books: ";
    cin>>n;
    int arr[n];
    cout<<"Enter pages of books: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Minimum pages of maximum pages alloted to student: "<<endl;
    cout<<bookAllocation(arr,n,m);
    return 0;
}
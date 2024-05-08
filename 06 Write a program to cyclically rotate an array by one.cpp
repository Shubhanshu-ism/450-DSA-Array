#include <bits/stdc++.h> 
#include <iostream>
using namespace std;
void rev(int arr[],int i,int j){
    while(i<j){
        int t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
        i++;
        j--;
    }
}
int main() {
    //Write your code here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
       cin>>arr[i]; 
    }
    int k;
    cin>>k;
    k=k%n;
    
    rev(arr,0,k-1);
    rev(arr,k,n-1);
    rev(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

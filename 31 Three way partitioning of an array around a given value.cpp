#include <bits/stdc++.h> 
vector<int> threeWayPartition(vector<int> &arr, int n, int a, int b)
{
    int i=0;
    int mid=0;
    int j=n-1;
    while(mid<=j){
        if(arr[mid]<a) swap(arr[mid++],arr[i++]);
        else if(arr[mid]>b) swap(arr[mid],arr[j--]);
        else mid++;
    }
    
    return arr;
}

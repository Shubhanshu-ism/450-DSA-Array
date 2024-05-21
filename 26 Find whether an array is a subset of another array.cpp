#include <bits/stdc++.h> 
bool checkSubset(vector < int > & arr1, vector < int > & arr2, int n, int m) 
{
    sort(arr1.begin(),arr1.end());
    sort(arr2.begin(),arr2.end());
    int i=0,j=0,cnt=0;
    while(i<n)
    {
        if(j<m&&arr1[i]==arr2[j])
        {
            i++;
            j++;
            cnt++;
        }else i++;
    }
    if(cnt==m) return true;
    else return false; 
}
/*
Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m, where both arrays may contain duplicate elements. The task is to determine whether array a2 is a subset of array a1. It's important to note that both arrays can be sorted or unsorted. Additionally, each occurrence of a duplicate element within an array is considered as a separate element of the set.
Example 1:
Input:
a1[] = {11, 7, 1, 13, 21, 3, 7, 3}
a2[] = {11, 3, 7, 1, 7}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

*/
bool checkSubset(vector < int > & arr1, vector < int > & arr2, int n, int m) {
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        mp[arr1[i]]++;
    }
    for(int i=0;i<m;i++)
    {
        if(mp[arr2[i]]==0) return false;
        mp[arr2[i]]--;
    }
    return true;
}

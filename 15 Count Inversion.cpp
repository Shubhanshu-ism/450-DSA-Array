//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long int inversionCount(long long arr[], long long N)
    {
       return mergeSort(0,N-1,arr);
    }
    long long mergeSort(long long i,long long j,long long arr[])
    {
        if(i>=j) return 0;
        long long cnt=0;
        long long mid=(i+j)/2;
        cnt+= mergeSort(i,mid,arr);
        cnt+= mergeSort(mid+1,j,arr);
        cnt+= merge(i,mid,j,arr);
        return cnt;
    }
    long long merge(long long left,long long mid,long long right,long long arr[]){
        if(left>=right) return 0;
        long long cnt=0;
        long long i=left,j=mid+1,k=left;
        long long temp[right+1];
        while(i<=mid && j<=right)
        {
            if(arr[i]<=arr[j]) temp[k++]=arr[i++];
            else
            {
                cnt+=(mid-(i-1));
                temp[k++]=arr[j++];
            }
        }
        while(i<=mid) temp[k++]=arr[i++];
        while(j<=right) temp[k++]=arr[j++];
        for(int ind=left;ind<=right;ind++){
            arr[ind]=temp[ind];
        }
        return cnt;
    }

};

//{ Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
/*
Given an array of integers. Find the Inversion Count in the array. 

Inversion Count: For an array, inversion count indicates how far (or close) the array is from being sorted. If the array is already sorted then the inversion count is 0.
If an array is sorted in the reverse order then the inversion count is the maximum. 
Formally, two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
 

Example 1:

Input: N = 5, arr[] = {2, 4, 1, 3, 5}
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 
has three inversions (2, 1), (4, 1), (4, 3).
*/

// } Driver Code Ends

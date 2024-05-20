//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
    //     // long long curMax =arr[0], maxSum = arr[0];
    //     // for(int i=1;i<n;i++){
    //     //     curMax = max(arr[i],curMax+arr[i]);
    //     //     maxSum = max(maxSum,curMax);
    //     // }
    //     // return maxSum;
        int j=0;
        long long sum=0, mx=arr[0];
        while(j<n)
        {
            sum+=arr[j];
            if(sum>mx) mx=sum;
            if(sum<0) sum=0;
            j++;
        }
        return mx;
    }
    long long max(long long a,long long b){
        if(a>b) return a;
        else return b;
    }
    // long long maxSubarraySum(int arr[], int n){
    //     long long sum=0;
    //     long long mx=arr[0];
    //     for(int i=0;i<n;i++){
    //         sum+=arr[i];
    //         mx=max(mx,sum);
    //         if(sum<0)sum=0;
    //     }
    //     return mx;
    // }
};

//{ Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}

// } Driver Code Ends

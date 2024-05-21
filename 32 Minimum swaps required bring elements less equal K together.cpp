//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
       int windowSize =0;
       for(int i=0;i<n;i++){
           if(arr[i]<=k) windowSize++;
       }
       int i=0, j=0,greater=0,ans=INT_MAX;
       while(j<n){
           if(arr[j]>k) greater++;
           if(j-i+1==windowSize)
           {
               ans=min(ans,greater);
               if(arr[i]>k) greater--;
               
            i++;
           }
           j++;
           
       }
      if(ans==INT_MAX) return 0;
       return ans;
    }
};
/*

Given an array arr of n positive integers and a number k. One can apply a swap operation on the array any number of times, i.e choose any two index i and j (i < j) and swap arr[i] , arr[j] . Find the minimum number of swaps required to bring all the numbers less than or equal to k together, i.e. make them a contiguous subarray.

Example 1:
Input : 
arr[ ] = {2, 1, 5, 6, 3} 
K = 3
Output : 1
Explanation:
To bring elements 2, 1, 3 together,
swap index 2 with 4 (0-based indexing),
i.e. element arr[2] = 5 with arr[4] = 3
such that final array will be- 
arr[] = {2, 1, 3, 6, 5}

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 105
1 ≤ Arri, K ≤107
*/


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends

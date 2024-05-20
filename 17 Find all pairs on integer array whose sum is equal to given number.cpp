//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    // long long dp[100001];
    int getPairsCount(int arr[], int n, int k) {
        // code here
        int cnt=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int val=k-arr[i];
            if(mp[val]){
                cnt+=mp[val];
            }
            mp[arr[i]]++;
        }
        
        
        return cnt;
    }    
};
// sorted array in increasing order
int pairSum(vector<int> &arr, int n, int target){
	int left=0, right=n-1,ans=0;
	while(left<right){
		int val=arr[left]+arr[right];
		if(val==target){
			left++;
			right--;
			ans++;
		}
		else if(val<target) left++;
		else right--;
	}
	if(ans==0) return -1;
	return ans;
}
/*
Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.

Example 1:
Input:
N = 4, K = 6
arr[] = {1, 5, 7, 1}
Output: 2
Explanation: 
arr[0] + arr[1] = 1 + 5 = 6 
and arr[1] + arr[3] = 5 + 1 = 6.
*/
/*
Problem statement
You are given an array/list ‘ARR’ consisting of ‘N’ distinct integers arranged in ascending order. You are also given an integer ‘TARGET’. Your task is to count all the distinct pairs in ‘ARR’ such that their sum is equal to ‘TARGET’.
Note:
1. Pair (x,y) and Pair(y,x) are considered as the same pair. 
2. If there exists no such pair with sum equals to 'TARGET', then return -1.
Example:
Let ‘ARR’ = [1 2 3] and ‘TARGET’ = 4. Then, there exists only one pair in ‘ARR’ with a sum of 4 which is (1, 3). (1, 3) and (3, 1) are counted as only one pair.
*/

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends

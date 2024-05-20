//{ Driver Code Starts
// A C++ program to find if there is a zero sum
// subarray
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        long long sum=0;
        map<long long,int> mp;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
            if(mp[sum]==1 || sum==0|| arr[i]==0) return true;
            mp[sum]=1;
            
        }
        
        return false;
        
    }
};
/*
Given an array of integers. Find if there is a subarray (of size at-least one) with 0 sum. You just need to return true/false depending upon whether there is a subarray present with 0-sum or not. Printing will be taken care by the driver code.
Example 1:
Input:
n = 5
arr = {4,2,-3,1,6}
Output: 
Yes
Explanation: 
2, -3, 1 is the subarray with sum 0.
*/

//{ Driver Code Starts.
// Driver code
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    Solution obj;
	    	if (obj.subArrayExists(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
	}
	return 0;
}
// } Driver Code Ends

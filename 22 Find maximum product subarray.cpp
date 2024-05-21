long long maxProduct(vector<int> arr, int n) 
  {
	   long long ans=arr[0];
	   long long mi=ans;
	   long long ma=ans;
	   for(int i=1;i<n;i++)
	   {
	       if(arr[i]<0) swap(ma,mi);
	       ma=max(arr[i], ma*arr[i]);
	       mi=min(arr[i], mi*arr[i]);
	       ans=max(ans,ma);
	   }
	   return ans;
	   
	}
	long long max(long long a,long long b)
  {
	    if(a>b) return a;
	    return b;
	}
	long long min(long long a,long long b)
  {
	    if(a<b) return a;
	    return b;
	}
long long maxProduct(vector<int> arr, int n) 
  {
	    // code here
	   long long preFix=1;
	   long long sufFix=1;
	   long long ans=INT_MIN;
	   for(int i=0;i<n;i++)
     {
	       if(preFix==0) preFix=1;
	       if(sufFix==0) sufFix=1;
	       preFix*=arr[i];
	       sufFix*=arr[n-1-i];
	       ans=max(ans,max(preFix,sufFix));
	   }
	   return ans;
	}
/*
Given an array Arr[] that contains N integers (may be positive, negative or zero). Find the product of the maximum product subarray.

Example 1:
Input:
N = 5
Arr[] = {6, -3, -10, 0, 2}
Output: 180
Explanation: Subarray with maximum product
is [6, -3, -10] which gives product as 180.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
1 ≤ N ≤ 500
-102 ≤ Arri ≤ 102
*/

//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;
// ** -- Where order is not nessary
void rearrange(int arr[], int n)
{
	int i = -1, j = n;

	while (i < j)
	{
		while(i <= n - 1 and arr[i] > 0)
			i += 1;
		while (j >= 0 and arr[j] < 0)
			j -= 1;
		if (i < j)
			swap(arr[i], arr[j]);
	}

	if (i == 0 || i == n)
		return;

	
	int k = 0;
	while (k < n && i < n)
	{
		swap(arr[k], arr[i]);
		i = i + 1;
		k = k + 2;
	}
}

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int arr[], int n) 
	{
	    vector<int> posi,negi;
	   for(int i=0;i<n;i++){
	       if(arr[i]<0) negi.push_back(arr[i]);
	       else posi.push_back(arr[i]);
	   }
	   int i=0, j=0,k=0;
	   int n1=posi.size();
	   int n2=negi.size();
	   while(i<n1&&j<n2){
	       arr[k++]=posi[i++];
	       arr[k++]=negi[j++];
	   }
	   while(i<n1) arr[k++]=posi[i++];
	   while(j<n2) arr[k++]=negi[j++];
	}
	
};
// if equal no of positive & negative
vector<int> alternateNumbers(vector<int>&a) {
    int n=a.size();
    int i=0,j=1;
    vector<int> ans(n,0);
    for(int k=0;k<n;k++){
        // if(i>=n || j>=n) break;
        if(a[k]<0){
            ans[j]=a[k];
            j+=2;
        }
        else{
            ans[i]=a[k];
            i+=2;
        }
    }
    return ans;
}

/*
Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
Note: Array should start with a positive number and 0 (zero) should be considered a positive element.
 
Example 1:
Input: 
N = 9
Arr[] = {9, 4, -2, -1, 5, 0, -5, -3, 2}
Output:
9 -2 4 -1 5 -5 0 -3 2
Explanation : Positive elements : 9,4,5,0,2
Negative elements : -2,-1,-5,-3
As we need to maintain the relative order of
postive elements and negative elements we will pick
each element from the positive and negative and will
store them. If any of the positive and negative numbers
are completed. we will continue with the remaining signed
elements.The output is 9,-2,4,-1,5,-5,0,-3,2.
*/
//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends

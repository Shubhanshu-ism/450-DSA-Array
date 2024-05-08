//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        vector<int> p;
        vector<int> neg;
        int k=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0) neg.push_back(arr[i]);
            else p.push_back(arr[i]);
        }
        for(int i=0;i<p.size();i++) arr[k++]=p[i];
        for(int i=0;i<neg.size();i++) arr[k++]=neg[i];
        
    }


// Unoredered partition
    vector<int> separateNegativeAndPositive(vector<int> &nums){
      // Write your code here.
  //    int i=0;
  //    int j=nums.size()-1;
      int i=-1;
      int j=0;
      while(j<nums.size())
     {
         if(nums[j]<0){
             i++;
             int temp=nums[i];
             nums[i]=nums[j];
             nums[j]=temp;
         }
         j++;
     }
     return nums;
  }
};


//{ Driver Code Starts.
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution ob;
		ob.segregateElements(a,n);
		
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
		cout<<endl;
	}
}

// } Driver Code Ends

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      int t[100001]={0};
      int mi=0;
      int mx=100000;
      for(int i=0;i<N;i++){
          t[arr[i]]++;
          mi=min(mi,arr[i]);
          mx=max(mx,arr[i]);
      }
      int cnt=1;
      for(int i=mi;i<=mx;i++)
      {
          int c=1;
          while(i+1<=mx &&t[i]&&t[i+1]){
            c++;
            i++;
          }
          cnt=max(c,cnt);
      }
      return cnt;
    }
};
/*
Expected Time Complexity: O(R), where R is the maximum integer in the array.
Expected Auxiliary Space: O(N).
Constraints:
1 <= N <= 10^5
0 <= a[i] <= 10^5

Example 1:
Input:
N = 7
a[] = {2,6,1,9,4,5,3}
Output:
6
Explanation:
The consecutive numbers here
are 1, 2, 3, 4, 5, 6. These 6 
numbers form the longest consecutive
subsquence.
*/
//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends

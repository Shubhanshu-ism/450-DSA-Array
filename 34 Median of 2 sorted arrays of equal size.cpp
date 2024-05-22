//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) 
    {
            int cnt=0,sum=0,prevMin=0;
            int i=0,j=0;
            while(i<n && j<n)
            {
                if(cnt==n){
                    sum=prevMin;
                }
                if(cnt==n+1) break;
                if(ar1[i]<ar2[j]){
                    cnt++;
                    prevMin=ar1[i++];
    
                }
                else{
                    cnt++;
                    prevMin=ar2[j++];
                }
            }
            while(i<n){
                if(cnt==n){
                    sum=prevMin;
                }
                if(cnt==n+1) break;
                cnt++;
                prevMin=ar1[i++];
            }
            while(j<n){
                if(cnt==n){
                    sum=prevMin;
                }
                if(cnt==n+1) break;
                prevMin=ar2[j++];
            }
            return sum+prevMin;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends

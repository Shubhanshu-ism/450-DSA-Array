//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        // set<int> st;
        // for(int i=l;i<=r;i++){
        //     st.insert(arr[i]);
        // }
        // k--;
        // while(st.size() && k--){
        //     st.erase(st.begin());
        // }
        // return *st.begin();
      
        int t[100001]={0};
        int cnt=0;
        int ans=0;
        for(int i=0;i<=r;i++){
            t[arr[i]]=1;
        }
        for(int j=0;j<=100001;j++){
            if(t[j]==1){
                cnt++;
                if(cnt==k){
                    ans=j;
                    break;
                }
            }
        }    
        /*
        space optimised
        priority_queue<int> maxH;
           for(int i=0;i<=r;i++)
           {
               maxH.push(arr[i]);
               if(maxH.size()>k) maxH.pop();
           }
           return maxH.top();
        */
        return ans;
        
    }
};
/*
Example 1:

Input:
n = 6
arr[] = 7 10 4 3 20 15
k = 3
l=0 r=5

Output : 
7

Explanation :
3rd smallest element in the given 
array is 7.
*/
//{ Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends

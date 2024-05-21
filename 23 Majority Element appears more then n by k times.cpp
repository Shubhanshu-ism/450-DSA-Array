#include <bits/stdc++.h> 
vector<int> countTheNumber(vector<int> &arr, int n, int k)
{
    unordered_map<int,int> mp;
    set<int> st;
    for(int i=0;i<n;i++)
    {
        mp[arr[i]]++;
        if(mp[arr[i]]>=(n/k)) st.insert(arr[i]);
        
    }
    vector<int> ans;
    while(st.size()){
        ans.push_back(*st.begin());
        st.erase(st.begin());
    }
    return ans;
}

// k==3 we can use max vote algo given below
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int max1=INT_MIN, max2=INT_MIN;
        int n=nums.size();
        // if(n<3) return nums;
        int cnt1=0, cnt2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==max1) cnt1++;
            else if(nums[i]==max2) cnt2++;
            else if(cnt1==0)
            {
                cnt1=1;
                max1=nums[i];
            }
            else if(cnt2==0)
            {
                cnt2=1;
                max2=nums[i];
            }
            else{
                cnt1--;
                cnt2--;
            }
        }
        cnt2=cnt1=0;
        for(int i=0;i<n;i++){
            if(nums[i]==max1) cnt1++;
            if(nums[i]==max2) cnt2++;
        }
        // cout<<max1<<' '<<cnt1<<endl;
        // cout<<max2<<' '<<cnt2<<endl;
        vector<int> ans;
        if(cnt1>(n/3)) ans.push_back(max1);
        if(cnt2>(n/3)) ans.push_back(max2);
        return ans;
    }
};

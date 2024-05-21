//to find pair 
#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K)
{
	vector<vector<int>> ans;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-2;i++){
		if(i==0||(i>0 &&arr[i]!=arr[i-1]))
		{
			int j=i+1,k=n-1;
			while(j<k){
				if(arr[i]+arr[j]+arr[k]==K){
					vector<int>ds;
					ds.push_back(arr[i]);
					ds.push_back(arr[j]);
					ds.push_back(arr[k]);
					ans.push_back(ds);
					while(j<k&& arr[j]==arr[j+1]) j++;
					while(j<k&& arr[k]==arr[k-1]) k--;
					j++;
					k--;
				}
				else if(arr[i]+arr[j]+arr[k]>K) k--;
				else j++;
			}
		}
	}
	return ans;
}
// to find pair exist or not
bool find3Numbers(int A[], int n, int X)
    {
        int  mp[100001];
        memset(mp,0,sizeof(mp));
        for(int i=0;i<n;i++){
            mp[A[i]]++;
        }
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int num=X-A[i]-A[j];
                mp[A[i]]--;
                mp[A[j]]--;
                if(num>=0 && mp[num]>0) return true;
                mp[A[i]]++;
                mp[A[j]]++;
            }
        }
        return false;
    }

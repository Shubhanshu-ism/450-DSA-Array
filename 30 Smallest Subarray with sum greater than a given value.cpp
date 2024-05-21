class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        vector<int> pre(n+1,0);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        int ans=INT_MAX;
        int i=0, j=1;
        while(j<=n && i<j){
            int sum =pre[j]-pre[i];
            if(sum>=target){
                ans = min(ans,j-i);
                i++;
            }
            else  j++;
            
        }
        if(ans>n) ans=0;
        return ans;
    }
};
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int right=0;
        int shortest=INT_MAX;
        int sum=0;
        while(right <n){
            sum+=nums[right];
            // if(sum>=target){
                while(sum>=target){
                    shortest=min(shortest,right-left+1);
                    sum-=nums[left];
                    left++;
                }
            //}
            right++;
        }
        if(shortest!=INT_MAX) return shortest;
        else return 0;
    }
};

class Solution{
  public:
    int minJumps1(int arr[], int n)
    {
       for(int i=1;i<n;i++){
           arr[i]=max(arr[i]+i,arr[i-1]);
       }

       int jump=0;
       int i=0;
       while(i<n-1){
           jump++;
           if(arr[i]==i) return -1;
           i=arr[i];
           
       }
       return jump;
    }
    int minJumps2(int arr[], int n){
       int jump=0, maxReach=0,curReach=0;
       if(n==1) return 0;
       for(int i=0;i<n;i++){
           maxReach=max(maxReach,i+arr[i]);
           if(maxReach>= n-1) return jump+1;
           if(maxReach==i) return -1;
           if(curReach==i){
               curReach=maxReach;
               jump++;
           }
       }
       return jump;
    }
    //Below is dp code when it is assumed that n-1 th index is reachable As its TC = O(n^2), SC=O(n)
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(),-1);
        return solve(0,nums,dp);
    }
    long long solve(int i,vector<int>& arr,vector<int>& dp){
        if(i>=arr.size()-1) return 0;
        if(dp[i]!=-1) return dp[i];
        long long jmp=arr.size();
        for(int k=1;k<=arr[i];k++){
            jmp=min(jmp,1+solve(k+i,arr,dp));
        }
        return dp[i]= jmp;
    }
};

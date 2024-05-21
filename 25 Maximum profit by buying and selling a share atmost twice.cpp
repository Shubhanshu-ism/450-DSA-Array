int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int t[n+1][3][2];
        memset(t,0,sizeof(t));
        // for(int i=0;i<n;i++){
        //     for(int k=0;k<2;k++){
        //         t[i][0][k]=0;
        //     }
        // }
        // for(int j=0;j<3;j++){
        //     for(int k=0;k<2;k++){
        //         t[n][j][k]=0;
        //     }
        // }
        for(int i=n-1;i>=0;i--){
            for(int j=1;j<3;j++){
                for(int k=0;k<2;k++){
                    if(k) t[i][j][k]=max(-prices[i]+t[i+1][j][0], t[i+1][j][1]);
                    else  t[i][j][k]=max(prices[i]+t[i+1][j-1][1],t[i+1][j][0]);
                }
            }
        }
        return t[0][2][1];
    }
int t[100001][3][2];
int maxProfitMemo(vector<int>& prices) 
{
        int n=prices.size();
        memset(t,-1,sizeof(t));
        return sol(prices,0,2,1);
}

    int sol(vector<int>& prices,int ind ,int cap,int buy)
    {
        if(cap==0) return 0;
        if (ind==prices.size()) return 0;
        if(t[ind][cap][buy]!=-1) return t[ind][cap][buy] ;
        if(buy){
            return t[ind][cap][buy]= max(-prices[ind]+sol(prices,ind+1,cap,0),sol(prices,ind+1,cap,1));
        }
        else{
            return t[ind][cap][buy]= max(prices[ind]+sol(prices,ind+1,cap-1,1),sol(prices,ind+1,cap,0));
        }
    }
    

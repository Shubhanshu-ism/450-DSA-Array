class Solution {
public:
    vector<int> factorial(int N){
        vector<int> res;
        res.push_back(1);
        int prod=1,carry=0;
        for(int i=2;i<=N;i++)
        {
            int size=res.size();
            for(int j=0;j<size;j++)
            {
                int cur = carry+res[j]*i;
                res[j]=cur%10;
                carry=cur/10;
            }
            while(carry)
            {
                res.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};
/*
Input: N = 10
Output: 3628800
Explanation :
10! = 1*2*3*4*5*6*7*8*9*10 = 3628800

Complete the function factorial() that takes integer N as input parameter and returns a list of integers denoting the digits that make up the factorial of N.

Expected Time Complexity : O(N2)
Expected Auxilliary Space : O(1)
Constraints: 1 ≤ N ≤ 1000
*/

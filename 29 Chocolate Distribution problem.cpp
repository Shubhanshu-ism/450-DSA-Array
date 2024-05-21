#include <bits/stdc++.h> 
int findMinDiff(int n, int m, vector<int> chocolates) 
{
    if(m>n) return -1;
    sort(chocolates.begin(),chocolates.end());
    int ans=chocolates[m-1]-chocolates[0];
    for(int i=1;i<n-m+1;i++)
    {
        ans=min(ans,chocolates[m-1+i]-chocolates[i]);
    }
    return ans;
}
/*
Problem statement
Given an array/list of integer numbers 'CHOCOLATES' of size 'N', where each value of the array/list represents the number of chocolates in the packet. There are ‘M’ number of students and the task is to distribute the chocolate to their students. Distribute chocolate in such a way that:

1. Each student gets at least one packet of chocolate.
2. The difference between the maximum number of chocolate in a packet and the minimum number of chocolate in a packet given to the students is minimum.

Example :
Given 'N' : 5 (number of packets) and 'M' : 3 (number of students)
And chocolates in each packet is : {8, 11, 7, 15, 2}

All possible way to distribute 5 packets of chocolates among 3 students are -

( 8,15, 7 ) difference of maximum-minimum is ‘15 - 7’ = ‘8’
( 8, 15, 2 ) difference of maximum-minimum is ‘15 - 2’ = ‘13’ 
( 8, 15, 11 ) difference of maximum-minimum is ‘15 - 8’ = ‘7’
( 8, 7, 2 ) difference of maximum-minimum is ‘8 - 2’ = ‘6’
( 8, 7, 11 ) difference of maximum-minimum is ‘11 - 7’ = ‘4’
( 8, 2, 11 ) difference of maximum-minimum is ‘11 - 2’ = ‘9’
( 15, 7, 2 ) difference of maximum-minimum is ‘15 - 2’ = 13’
( 15, 7, 11 ) difference of maximum-minimum is ‘15 - 7’ = ‘8’
( 15, 2, 11 ) difference of maximum-minimum is ‘15 - 2’ = ‘13’
( 7, 2, 11 ) difference of maximum-minimum is ‘11 - 2’ = ‘9’

Hence there are 10 possible ways to distribute ‘5’ packets of chocolate among the ‘3’ students and difference of combination (8, 7, 11) is ‘maximum - minimum’ = ‘11 - 7’ = ‘4’ is minimum in all of the above.
Constraints:
1 <= T <= 50
2 <= M <= N <= 10^4
1 <= CHOCOLATES[i] <= 10^9
Time Limit : 1 sec
*/

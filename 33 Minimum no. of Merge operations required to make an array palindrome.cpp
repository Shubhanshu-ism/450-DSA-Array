#include <bits/stdc++.h> 
int palindrome(vector<int> A)
{
	long long n=A.size();
	vector<long long> arr(n);
	for(int i=0;i<n;i++) arr[i]=A[i];
	int i=0,j=n-1,ans=0;
	while(i<j)
	{
		if(arr[i]==arr[j]){
			i++;
			j--;
		}
		else if(arr[i]<arr[j]){
			arr[i+1]+=arr[i];
			i++;
			ans++;
		}
		else{
			arr[j-1]+=arr[j];
			j--;
			ans++;
		}
	}
	return ans;
}
/*
Problem statement
You are given an array ‘A’ of length ‘N’ consisting only of positive integers. Your task is to make the given array a palindrome by using a minimum number of operations. In one operation, you can select two adjacent indexes and merge them by adding their values. After every operation, the length of the array decreases by one.
Note: An array of length ‘1’ is a palindrome.
For example:
Let’s say the array ‘A’ = [1, 2, 3, 4, 5], then after merging indexes 2 and 3, the array ‘A’ will look like [1, 5, 4, 5].
Detailed explanation ( Input/output format, Notes, Images )
Constraints -
1 <= ‘T’ <= 5
1 <= ‘N’ <= 10^5 
1 <= A[i] <= 10^9, for 1 <= i <= ‘N’
Note- Sum of ‘N’ over all test cases does not exceed 10^5.

Time Limit: 1 sec
*/

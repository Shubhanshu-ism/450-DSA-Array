long long getTrappedWater(long long* arr, int n) 
{
    long long  leftHeight[n], rightHeight[n];
    long long m1=INT_MIN, m2=INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>m1) m1=arr[i];
        if(arr[n-1-i]>m2) m2=arr[n-1-i];
        leftHeight[i]=m1;
        rightHeight[n-i-1]=m2;
    }
    long long  ans=0;
    for(int i=0;i<n;i++)
    {
        ans+= ( min( leftHeight[i], rightHeight[i] )  -arr[i] );
    }
    return ans;
}

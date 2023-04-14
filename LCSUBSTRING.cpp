#include <bits/stdc++.h>
using namespace std;
int LongestCommonSubstring(string a,string b){
    int x=a.length(),y=b.length();
    int dp[x+1][y+1];
    for(int i=0;i<x+1;i++)
    for(int j=0;j<y+1;j++)
    dp[i][j]=0;
    for(int i=1;i<x+1;i++)
    for(int j=1;j<y+1;j++)
    if(a[i-1]==b[j-1])
    dp[i][j]=1+dp[i-1][j-1];
    int maxval=0;
    for(int i=0;i<x+1;i++)
    maxval=max(maxval,*max_element(dp[i],dp[i]+y+1));
    return maxval;
}
int main()
{
    cout<<LongestCommonSubstring("abcdxyz","xyzabcd")<<endl;
    return 0;
}

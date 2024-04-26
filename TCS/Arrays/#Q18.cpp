#include<bits/stdc++.h>
using namespace std;

/*

Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

*/

string lcp(vector<string>&str)
{
    sort(str.begin(),str.end());
    string ans="";
    int n=str.size();
    string first=str[0],last=str[n-1];
    
    for(int i=0;i<min(first.size(),last.size());i++)
    {
        if(first[i]!=last[i])
        {
            return ans;
        }
        
        ans+=first[i];
    }
    
    return ans;
    
}


int main()
{
    vector<string>s={"tcsdigital","tcsprime","tcsninja"};
    
    string ans=lcp(s);
    
    cout<<ans;

    return 0;
}
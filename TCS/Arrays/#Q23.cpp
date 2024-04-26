/*

Problem Statement: You have given two stirng s1 and s2, your mission is to calculate the sum of the character occurrences of the s2 string in string s1.

Example 1:

Input: s1 = "helloworld"
              s2 = "do" I

Output: 3

Example 2:
Input:  s1= "developer"
              s2 = "dev"
Output: 5
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1="developer";
    string s2="dev";
    map<char,int>mp;
    
    for(int i=0;i<s1.size();i++)
    {
        mp[s1[i]]++;
    }
    
    
    int sum=0;
    
    for(int i=0;i<s2.size();i++)
    {
        if(mp.count(s2[i])>0)
        {
            sum+=mp[s2[i]];
        }
    }
    
    cout<<sum;
    
    
    return 0;
}

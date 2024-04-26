/*

Problem Statement: Given two strings S1 and S2 of lowercase alphabets, find the list of uncommon characters for the two strings.

A character is uncommon if it is present only in one of the strings. it is either present in S1 or S2, but not in both.

Note:

1. Both the strings contain only lowercase alphabets and can contain duplicates.

2. Return the uncommon characters in sorted order and can not contain duplicates.

Example 1:

s1 ="digital"
s2 = "ninja"

Output: dgjlnt

*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1="digital";
    string s2="ninja";
    string ans="";
    
    set<char>st;
    
    map<char,bool>mp1;
    map<char,bool>mp2;
    
    for(int i=0;i<s1.size();i++)
    {
        mp1[s1[i]]=true;
    }
    
    for(int i=0;i<s2.size();i++)
    {
        if(!mp1.count(s2[i]))
        {
            st.insert(s2[i]);
        }
        
        mp2[s2[i]]=true;
    }
    
    for(int i=0;i<s1.size();i++)
    {
        if(!mp2.count(s1[i]))
        {
            st.insert(s1[i]);
        }
        
    }
    
    for(auto it:st)
    {
        ans+=it;
    }
    
    cout<<ans;
    
    return 0;
}

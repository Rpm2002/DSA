/*

Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once.

Example 1:
Input: s = "anagram", t = "nagaram"
Output: true

Example 2:
Input: s = "rat", t = "car"
Output: false

*/

// ************************************** CODE *****************************************

/*

class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        // Approach-1  :  map se frequency count kar lenge
        // Time complexity and space complexity : O(s+t)


        if(s.size()!=t.size())
        {
            return false;
        }

        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        for(int i=0;i<s.size();i++)
        {
            mp1[s[i]]++;
            mp2[t[i]]++;
        }

        for(int i=0;i<mp1.size();i++)
        {
            if(mp1[i]!=mp2[i])
            {
                return false;
            }
        }

        return true;

        // ******************************************************************************
        
        // Approach -2 - By sorting 2 strings

        if(s.size()!=t.size())
        {
            return false;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=t[i])
            {
                return false;
            }
        }

        return true;

    }
};

*/
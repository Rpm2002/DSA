/*
Given a string of characters, find the length of the longest proper prefix which is also a proper suffix.
NOTE: Prefix and suffix can be overlapping but they should not be equal to the entire string.

Example 1:
Input: s = "abab"
Output: 2
Explanation: "ab" is the longest proper prefix and suffix. 

Example 2:
Input: s = "aaaa"
Output: 3
Explanation: "aaa" is the longest proper prefix and suffix. 

*/

// ******************************** CODE **********************************

/*

class Solution{
  public:		
	int lps(string s) 
	{
	    vector<int>lps(s.size(),0);
	    int pre=0,suf=1;
	    
	    while(suf<s.size())
	    {
	       // Match
	        if(s[pre]==s[suf])
	        {
	            lps[suf]=pre+1;
	            pre++;
	            suf++;
	        }
	       // Not Match
	       
	       else
	       {
	           if(pre==0)
	           {
	               lps[suf]=0;
	               suf++;
	           }
	           
	           else
	           {
	               pre=lps[pre-1];
	           }
	       }
	    }
	    
	    return lps[s.size()-1];
	    
	}
	
// 	Youtube : https://youtu.be/sODA1BzFvsE?feature=shared

*/

/*

Given a string S without spaces, a character ch, and an integer count, the task is to find the string after the specified character has occurred count number of times.

Example 1:

Input:  S = "Thisisdemostring", ch = 'i', 
count = 3
Output: ng
Explanation: Substring of S after the 3rd
occurrence of 'i' is "ng"
Example 2:

Input:  S = "Thisisdemostri", ch = 'i', 
count = 3
Output: Empty string
Explanation: 'i' occurce 3rd time at 
last index

Note:  “Empty string” should be returned incase of any unsatisfying conditions (Given character is not present, or present but less than given count, or given count completes on the last index). If given count is 0, then given character doesn’t matter, just return the whole string.

*/

// *************************************** CODE ********************************

/*

string printString(string &s, char ch, int count)
	{
	    if(count==0) return s;
	    string ans="";
	    int currcnt=0;
	    
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]==ch)
	        {
	            currcnt++;
	            if(currcnt==count)
	            {
	                // Check if the count completes on the last index
	                if(i+1<s.size()) 
	                {
	                    ans=s.substr(i+1);
	                    return ans;
	                }
	                break;
	            }
	            
	        }
	    }
	    
	    return "Empty string";
	}

*/